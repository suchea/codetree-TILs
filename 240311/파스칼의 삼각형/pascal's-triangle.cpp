#include <iostream>
using namespace std;

int main() {
    int arr[15][15] = {0}, n, count = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < count; j++) {
            if(i == j || j == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
        count++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] != 0)
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}