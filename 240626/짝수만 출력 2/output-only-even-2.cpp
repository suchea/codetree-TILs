#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    cin >> b >> a;
    i = b;
    while(i >= a) {
        if(i % 2 == 0)
            cout << i << " ";
        i--;
    }
    return 0;
}