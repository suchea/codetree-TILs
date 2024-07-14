#include <iostream>
using namespace std;

int main() {
    int num, n = 1;
    for(int i = 0; i < 5; i++) {
        cin >> num;
        if(num % 3 != 0) {
            n = 0;
            break;
        }
    }
    cout << n;
    return 0;
}