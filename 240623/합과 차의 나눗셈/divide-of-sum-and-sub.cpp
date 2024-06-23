#include <iostream>
using namespace std;

int main() {
    int a, b;
    double n;
    cin >> a >> b;
    cout << fixed;
    cout.precision(2);
    n = (double)(a + b) / (a - b);
    cout << n;
    return 0;
}