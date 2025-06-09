#include <iostream>
using namespace std;

int main() {
    long long M,N,Y;
    cin >> M >> N;
    M = M % 10;
    N = N % 10;
    Y = M + N;
    cout <<Y;
    return 0;
}