#include <iostream>
#include <string>
using namespace std;

struct strInfo {
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo &Info) {
    cout << "Enter your First Name: \n";
    cin >> Info.FirstName;

    cout << "Enter your Last Name: \n";
    cin >> Info.LastName;

    cout << "Enter your age: \n";
    cin >> Info.Age;

    cout << "Enter your phone number: \n";
    cin >> Info.Phone;
}

void PrintInfo(strInfo &Info) {
    cout << "\n**********************\n";
    cout << "First name: " << Info.FirstName << endl;
    cout << "Last name: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;
    cout << "\n**********************\n";
}

int main() {

    strInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);

    return 0;
}
