#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int j, k;
    for(int i = 0; i < n; i++) {
        for(j = n  - i; j > 0; j--)
            cout << "*";
        for(k = 0; k < i * 2; k++)
            cout << " ";
        for(j = n  - i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}