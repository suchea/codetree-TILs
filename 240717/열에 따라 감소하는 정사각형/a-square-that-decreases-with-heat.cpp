#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < 4; i++) {
        for(int j = 4; j > 0; j--)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}