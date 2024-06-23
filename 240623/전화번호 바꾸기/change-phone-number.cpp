#include <iostream>
#include <string>
using namespace std;

string ph(int n) {
    string s = to_string(n);
    if(n < 10) {
        s = "000" + s;
    }
    if(n < 100) {
        s = "00" + s;
    }
    if(n < 1000) {
        s = '0' + s;
    }
    return s;
}

int main() {
    int a, b, c;
    string s1, s2, s3;
    char ch;
    cin >> a >> ch >> b >> ch >> c;
    s1 = to_string(a);
    if(a < 100) {
        s1 = '0' + s1;
    }
    s2 = ph(b);
    s3 = ph(c);
    cout << s1 << ch << s3 << ch << s2;
    return 0;
}