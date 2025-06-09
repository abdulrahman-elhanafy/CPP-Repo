#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(9);
    long double R;
    cin >> R;
    const long double pi = 3.141592653;
    long double Area = pi * (R * R);
    cout << Area;
}