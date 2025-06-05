#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <valarray>
using namespace std;

float CircleArea(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float R = (a * b * c) / (4 * sqrt(p * ( p - a) * (p-b) * (p - c)));
    float Area = (M_PI) * pow(R,2);
    return Area;
}
int main() {
    float a,b,c;
    cout << "Enter a: ";
    cin >>a;
    cout << "Enter b: ";
    cin >>b;
    cout << "Enter c: ";
    cin >>c;
    cout << "Area equal : " << CircleArea(a,b,c) <<"cm²";
    return 0;
}
