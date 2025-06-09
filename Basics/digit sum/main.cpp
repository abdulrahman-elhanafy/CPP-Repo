#include <iostream>
using namespace std;

int main() {
    int sum_digits = 0 , num = 0;
    cout << "Enter a positive integer for sum of digits: ";
    cin >> num;
    while (num > 0) {
        int digit = num % 10;
        num  /= 10;
        sum_digits += digit;
    }
    cout << sum_digits;
    return 0;
}
