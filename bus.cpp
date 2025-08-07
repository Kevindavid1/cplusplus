#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
// for getting full details
struct Passenger {
    string name;
    int age;
    string from;
    string to;
    string travelDate;
    string busName;
    string time;
    int seatsBooked;
    float baseFare;
    float discountAmount;
    float totalFare;
    string discountType;
};
//details about the bus
struct Bus {
    string busName;
    string time;
    int seatsAvailable;
};
//fare for per seat
const float farePerSeat = 5.0;
//menu
void welcome() {
    cout << "==========================================================\n";
    cout << "        WELCOME TO BUS BOOKING APP \n";
    cout << "==========================================================\n";
    cout << " Your Journey, Our Responsibility! \n";
    cout << " Buckle Up for the Scenic Route! \n";
    cout << " Fixed Fare: ₹" << farePerSeat << " per seat\n";
    cout << " Senior Citizens (60+) enjoy a 30% discount!\n";
    cout << "----------------------------------------------------------\n";
}
//available buses for the time and date which was given by the user
void showAvailableBuses(const vector<Bus>& buses) {
    cout << "\n Available Buses:\n";
    for (int i = 0; i < buses.size(); ++i) {
        cout << "  " << (char)('A' + i) << ") " << buses[i].busName
             << " | Time: " << buses[i].time
             << " | Seats Available: " << buses[i].seatsAvailable << "\n";
    }
}
//for booking details
Passenger bookTicket(vector<Bus>& buses) {
    Passenger p;
    cout << "\n Enter your name: ";
    getline(cin, p.name);
    cout << " Enter your age: ";
    cin >> p.age;
    cin.ignore();
    cout << " Enter From City: ";
    getline(cin, p.from);
    cout << " Enter To City: ";
    getline(cin, p.to);
    cout << " Enter Travel Date (YYYY-MM-DD): ";
    getline(cin, p.travelDate);
//bus choice
    showAvailableBuses(buses);
    char busChoice;
    cout << "Choose a bus (A-" << (char)('A' + buses.size() - 1) << "): ";
    cin >> busChoice;
    cin.ignore();

    int busIndex = busChoice - 'A';
    if (busIndex < 0 || busIndex >= buses.size()) {
        cout << " Invalid bus selection.\n";
        exit(1);
    }

    Bus& selectedBus = buses[busIndex];
    p.busName = selectedBus.busName;
    p.time = selectedBus.time;
//to book seat
    cout << " Enter number of seats to book: ";
    cin >> p.seatsBooked;
    cin.ignore();

    if (p.seatsBooked <= 0 || p.seatsBooked > selectedBus.seatsAvailable) {
        cout << " Only " << selectedBus.seatsAvailable << " seat(s) available.\n";
        exit(1);
    }

    selectedBus.seatsAvailable -= p.seatsBooked;
    p.baseFare = p.seatsBooked * farePerSeat;

    // Senior Discount
    if (p.age >= 60) {
        p.discountAmount = p.baseFare * 0.30;
        p.discountType = "Senior (30%)";
    } else {
        p.discountAmount = 0.0;
        p.discountType = "None";
    }

    p.totalFare = p.baseFare - p.discountAmount;

    cout << " Booking successful!\n";
    return p;
}
//to show details abt the ticket
void showTicket(const Passenger& p, int id) {
    cout << "\n Ticket #" << (id + 1) << "\n";
    cout << "----------------------------------------\n";
    cout << " Name         : " << p.name << "\n";
    cout << " Age          : " << p.age << "\n";
    cout << " From         : " << p.from << "\n";
    cout << " To           : " << p.to << "\n";
    cout << " Date         : " << p.travelDate << "\n";
    cout << " Bus          : " << p.busName << "\n";
    cout << " Time         : " << p.time << "\n";
    cout << " Seats        : " << p.seatsBooked << "\n";
    cout << " Base Fare    : ₹" << fixed << setprecision(2) << p.baseFare << "\n";
    cout << " Discount     : " << p.discountType << " (-₹" << p.discountAmount << ")\n";
    cout << " Total Fare   : ₹" << p.totalFare << "\n";
    cout << "----------------------------------------\n";
}
//for cancelling the ticket
void cancelTicket(vector<Passenger>& bookings, vector<Bus>& buses) {
    if (bookings.empty()) {
        cout << " No bookings available to cancel.\n";
        return;
    }

    cout << "\n Bookings:\n";
    for (int i = 0; i < bookings.size(); ++i) {
        cout << "  " << (i + 1) << ". " << bookings[i].name
             << " | " << bookings[i].from << " to " << bookings[i].to
             << " | " << bookings[i].busName << " | " << bookings[i].travelDate << "\n";
    }

    int cancelId;
    cout << "Enter booking number to cancel: ";
    cin >> cancelId;
    cin.ignore();

    if (cancelId < 1 || cancelId > bookings.size()) {
        cout << " Invalid number.\n";
        return;
    }

    Passenger cancelled = bookings[cancelId - 1];

    // Restore seats
    for (auto& bus : buses) {
        if (bus.busName == cancelled.busName && bus.time == cancelled.time) {
            bus.seatsAvailable += cancelled.seatsBooked;
            break;
        }
    }

    bookings.erase(bookings.begin() + (cancelId - 1));
    cout << " Ticket cancelled successfully.\n";
}
//bus available
int main() {
    vector<Bus> buses = {
        {"Express Line", "08:00 AM", 15},
        {"Metro Deluxe", "01:30 PM", 10},
        {"Sunset Coach", "06:45 PM", 12}
    };

    vector<Passenger> bookings;

    welcome();
//  main menu
    while (true) {
        cout << "\n MAIN MENU:\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. View All Tickets\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                Passenger p = bookTicket(buses);
                bookings.push_back(p);
                showTicket(p, bookings.size() - 1);
                break;
            }
            case 2:
                cancelTicket(bookings, buses);
                break;
            case 3:
                if (bookings.empty()) {
                    cout << "ℹ No tickets booked.\n";
                } else {
                    for (int i = 0; i < bookings.size(); ++i) {
                        showTicket(bookings[i], i);
                    }
                }
                break;
            case 4:
                cout << "\n Thank you for choosing Easy Bus Booking App!\n";
                cout << " Keep traveling, keep smiling. keep exploring! \n";
                cout << "==================================================\n";
                return 0;
            default:
                cout << " Invalid option. Try again.\n";
        }
    }
}

