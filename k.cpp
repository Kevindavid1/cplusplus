//ifstream is to read
//ofstream is to write
//fstream to both write and read

//to write  a file:-
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream wfile("eg.txt");
//     if(!wfile){
//         cout<<"Error opening the file!"<<endl;
//         return 1;
//     }
//     wfile<<"test file"<<endl;
//     wfile<<"1st line"<<endl;
//     wfile<<"2nd line"<<endl;
//     wfile.close();
//     return 0;
// }

// to read a file:-
// #include<iostream>
// #include<fstream>

// using namespace std;
// int main(){
//     ifstream wfile("eg.txt");
//      if(!wfile){
//         cout<<"Error opening the file!"<<endl;
//         return 0;
//     }
//     string line;
//     while(getline(wfile,line)){
//         cout<<line<<endl;
//     }
//     wfile.close();
//     return 0;
// }

//read and write using fstream
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     fstream file("eg.txt",ios::in|ios::out|ios::app);
//     cout<<"Appending this line using fstream.\n";
//     file.seekg(0);
//     string line;
//     while(getline(file,line)){
//         cout<<line<<endl;
//         file.close();
//         return 0;
//     }
// }

//to delete the file:
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
if(remove("eg.txt")==0){
    cout<<"file deleted successfully."<<endl;
}else{
    cout<<"error deleting the file."<<endl;
}return 0;
}



