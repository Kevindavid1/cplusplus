#include <iostream>
#include <vector>
#include <limits>
#include <cctype>
using namespace std;
//for getting the users information
struct User {
    string name;
    int age;
    string dob;
};
//structure of the quizz
struct Question {
    string question;
    vector<string> options;
    char correctOption;
};

void clearScreen() {
    cout << string(50, '\n');
}
//for sign in
User signUp() {
    User user;
    cout << "=== Sign Up for Quiz ===\n";
    cout << "Enter your name: ";
    getline(cin, user.name);
    cout << "Enter your age: ";
    cin >> user.age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter your date of birth (DD/MM/YYYY): ";
    getline(cin, user.dob);
    
    return user;
}

void showWelcome(const User& user) {
    clearScreen();
    cout << "===================================\n";
    cout << "     Welcome to the Quiz Program!  \n";//title
    cout << "===================================\n";
    cout << "Name: " << user.name << " | Age: " << user.age 
         << " | DOB: " << user.dob << "\n"; //details of the user
    cout << "This quiz is about Programming Languages.\n";
    cout << "There are 10 multiple-choice questions.\n";//information
    cout << "Choose the correct option (A/B/C/D).\n\n";
}
//quiz questions
void loadQuestions(vector<Question>& questions) {
    questions = {
        {"Which language is known as the backbone of web development?", {"A. Python", "B. JavaScript", "C. C++", "D. Java"}, 'B'},
        {"Which language is best for system programming?", {"A. C", "B. HTML", "C. JavaScript", "D. CSS"}, 'A'},
        {"What does OOP stand for?", {"A. Object Oriented Program", "B. Open Original Process", "C. Object Oriented Programming", "D. None"}, 'C'},
        {"Which keyword is used to define a constant in C++?", {"A. const", "B. define", "C. static", "D. immutable"}, 'A'},
        {"Which one is not a programming language?", {"A. HTML", "B. Python", "C. C#", "D. Java"}, 'A'},
        {"What symbol is used to end a statement in C++?", {"A. :", "B. .", "C. ;", "D. \\"}, 'C'},
        {"Which of the following is a loop structure?", {"A. if", "B. switch", "C. for", "D. break"}, 'C'},
        {"Which language is used for developing Android Apps?", {"A. Kotlin", "B. Swift", "C. Python", "D. PHP"}, 'A'},
        {"Who developed the C programming language?", {"A. Bjarne Stroustrup", "B. Dennis Ritchie", "C. James Gosling", "D. Guido van Rossum"}, 'B'},
        {"Which operator is used for comparison?", {"A. =", "B. :", "C. ==", "D. !"}, 'C'}
    };
}
//for the valid option
bool isValidOption(char ch) {
    return ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D';
}
//quiz body
void startQuiz(const vector<Question>& questions, vector<bool>& results, vector<char>& userAnswers) {
    char answer;
    for (size_t i = 0; i < questions.size(); ++i) {
        cout << "Q" << i + 1 << ": " << questions[i].question << "\n";
        for (const auto& opt : questions[i].options) {
            cout << opt << "\n";
        }

        do {
            cout << "Your answer (A/B/C/D): ";
            cin >> answer;
            answer = toupper(answer);
            if (!isValidOption(answer)) {
                cout << "Invalid input! Please enter A, B, C, or D only.\n";
            }
        } while (!isValidOption(answer));

        userAnswers.push_back(answer);
        results.push_back(answer == questions[i].correctOption);
        cout << "\n";
    }
}
//to show result of the quizz
void showResults(const vector<Question>& questions, const vector<bool>& results, const vector<char>& userAnswers) {
    int correct = 0;
    cout << "\n========== Quiz Results ==========\n";
    for (size_t i = 0; i < questions.size(); ++i) {
        cout << "Q" << i + 1 << ": " << questions[i].question << "\n";
        cout << "Your Answer:   " << userAnswers[i] << " (" << questions[i].options[userAnswers[i] - 'A'] << ")\n";
        cout << "Correct Answer: " << questions[i].correctOption << " (" << questions[i].options[questions[i].correctOption - 'A'] << ")\n";

        if (results[i]) {
            cout << "Status: ✅ Correct\n";//if answer is correct
            correct++;
        } else {
            cout << "Status: ❌ Incorrect\n";//if answer is incorrect
        }
        cout << "----------------------------------\n";
    }

    cout << "\nTotal Correct:   " << correct << "/10\n";//total correct answers
    cout << "Total Incorrect: " << 10 - correct << "/10\n";//total incorrect answers
    cout << "==================================\n";
}
//main body
int main() {
    User user;
    vector<Question> questions;
    
    user = signUp();
    showWelcome(user);
    loadQuestions(questions);

    char choice;

    do {
        vector<bool> results;
        vector<char> userAnswers;

        cout << "\nPress Enter to start the quiz...";
        cin.ignore();
        cin.get();

        clearScreen();
        startQuiz(questions, results, userAnswers);
        showResults(questions, results, userAnswers);

        cout << "\nDo you want to retry the quiz? (Y/N): ";//for retry or quit
        cin >> choice;
        choice = toupper(choice);
        clearScreen();
    } while (choice == 'Y');//for retrying the quizz

    cout << "\nThank you for participating in the quiz!\n";//after exiting thr quizz
    return 0;
}
