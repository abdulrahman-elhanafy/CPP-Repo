#include <iostream>
using namespace std;

void ReadArrayData(float x[3]) {
    for (int i = 0; i < 3; ++i) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> x[i];
    }
}

void PrintArrayData(float x[3]) {
    for (int i = 0; i < 3; ++i) {
        cout << "Grade " << i + 1 << " = " << x[i] << endl;
    }
}

void PrintAverage(float x[3]) {
    double avg = (x[0] + x[1] + x[2]) / 3;
    cout << "Average = " << avg;
}

int main() {
    float x[3];
    ReadArrayData(x);
    PrintArrayData(x);
    PrintAverage(x);
}
