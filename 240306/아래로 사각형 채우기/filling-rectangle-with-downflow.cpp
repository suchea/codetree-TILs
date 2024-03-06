#include <iostream>
using namespace std;

int main() {
    int n, arr[10][10], x = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
       for(int j = 0; j < n; j++) {
            arr[j][i] = x++;
       }
    }
    for(int i = 0; i < n; i++) {
        for(int j =0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}