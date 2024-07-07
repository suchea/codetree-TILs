#include <iostream>
using namespace std;

int main() {
    int n, i = 1, num = 0;
    cin >> n;
    while(n > 1) {
        n /= i;
        i++;
        num++;
    }
    cout << num;
    return 0;
}