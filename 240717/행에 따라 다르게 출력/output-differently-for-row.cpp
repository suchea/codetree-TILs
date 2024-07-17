#include <iostream>
using namespace std;

int main() {
    int n, num = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            if(i % 2 == 0) num += 2;
            else num++;
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}