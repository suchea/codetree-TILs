#include <iostream>
using namespace std;

int main() {
    int n, i = 0;
    cin >> n;
    while(n != 1) {
        if(n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
        i++;
    }
    cout << i;
    return 0;
}