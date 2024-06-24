#include <iostream>
using namespace std;

void big(int x, int y) {
    cout << (x > y) << endl;
}
int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    big(a, b);
    big(a, c);
    big(a, d);
    big(a, e);
    return 0;
}