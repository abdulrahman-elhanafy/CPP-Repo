#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double A = 0, B = 0 , div = 0;
    cin >> A >> B;
    div = A / B;
    cout << "floor " << A << " / " << B << " = " << floor(div) <<endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(div) <<endl;
    cout << "round " << A << " / " << B << " = " << round(div) <<endl;
    return 0;
}