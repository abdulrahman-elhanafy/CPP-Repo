#include <iostream>
using namespace std;

int main() {
    long long X,Y;
    cin >> X >>Y;
    long long  nSum = X + Y;
    long long  nSub = X - Y;
    long long  nMulti = X * Y;
    cout << X << " + " << Y << " = " << nSum <<endl;
    cout << X << " * " << Y << " = " << nMulti <<endl;
    cout << X << " - " << Y << " = " << nSub <<endl;
    return 0;
}