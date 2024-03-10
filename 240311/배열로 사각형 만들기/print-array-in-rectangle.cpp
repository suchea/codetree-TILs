#include <iostream>
using namespace std;

int main() {
    int n = 5, arr[5][5];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0)
                arr[i][j] = 1;
            else {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1]; 
            }
        }
    }

    // print
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}