#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n - 1; i++) {
        int j, k;
        for(j = 0; j < n - (i + 1); j++)
            cout << " ";
        for(k = 0; k < i + 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = n; i > 0; i--) {
        int j, k;
        for(j = 0; j < n - i; j++)
            cout << " ";
        for(k = 0; k < i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}