#include <iostream>
using namespace std;

int main() {
    int arr[100][100], n, m, num = 0, temp = 1;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        if(temp % 2 == 1) {
            for(int j = 0; j < n; j++) {
                arr[j][i] = num++;
            }
        }
        else {
            for(int j = n - 1; j >= 0; j--) {
                arr[j][i] = num++;
            }
        }
        temp++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}