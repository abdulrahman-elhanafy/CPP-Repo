#include <iostream>
#include <string>
using namespace std;

struct strInfo {
    string firstName;
    string lastName;
    string phone;
    int Age;
};
void ReadInfo(strInfo& Info) {

    cout << "Enter Your First Name: ";
    cin >> Info.firstName;

    cout << "Enter Your Last Name: ";
    cin >> Info.lastName;

    cout << "Enter Your Phone Number: ";
    cin >> Info.phone;

    cout << "Enter Your Age: ";
    cin >> Info.Age;
    cout << "*************************************\n";
}

void PrintInfo(strInfo Info) {

    cout << "\n*****************************************************\n";
    cout << "First Name: " << Info.firstName << endl;
    cout << "Last Name: " << Info.lastName << endl;
    cout << "Phone : " << Info.phone << endl;
    cout << "Age : " << Info.Age;
    cout << "\n*****************************************************\n";
}

void ReadPersonsInfo(strInfo Persons[2]) {
    ReadInfo(Persons[0]);
    ReadInfo(Persons[1]);

}
void PrintPersonsInfo(strInfo Persons[2]){

    PrintInfo(Persons[0]);
    PrintInfo(Persons[1]);
}


int main() {
    strInfo Persons[2];
    ReadPersonsInfo(Persons);
    PrintPersonsInfo(Persons);
    return 0;
}
