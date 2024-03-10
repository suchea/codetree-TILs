#include <iostream>
using namespace std;

int main() {
    int n, num = 1, s = 0, i, j, arr[10][10];
    cin >> n;
    j = n;
    for(j = n - 1; j >= 0; j--) {
        if(s == 0) {
            for(i = n - 1; i >= 0; i--) {    
                arr[i][j] = num++;
            }
            s = 1;
        }
        else {
            for(i = 0; i < n; i++) {
                arr[i][j] = num++;
            }
            s = 0;
        } 
    }

    for(int x = 0; x < n; x++) {
        for(int y = 0; y < n; y++) {
            cout << arr[x][y] << " ";
        }
        cout << endl;
    }
    return 0;
}