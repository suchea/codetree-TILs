#include <iostream>
using namespace std;

int main() {
    int a, b, n = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(1920 % i == 0 && 2880 % i == 0) {
            n = 1;
            break;
        }
    }
    cout << n;
    return 0;
}