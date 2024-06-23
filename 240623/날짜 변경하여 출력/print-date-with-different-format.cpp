#include <iostream>
using namespace std;

int main() {
    int y, m, d;
    char c;
    cin >> y >> c >> m >> c >> d;
    c = '-';
    cout << m << c << d << c << y;
    return 0;
}