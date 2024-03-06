#include <iostream>
using namespace std;

int main() {
    int n, m, arr[100][100], num = 1, temp = 1;
    cin >> n >> m;
    for(int a = 0; a < n * m; a++) {
        int i = 0, j = temp - 1;
        while(i < temp && j >= 0)
        {
            if(i + j == temp - 1 && i < n && j < m) {
                arr[i][j] = num++;
            }
            i++; j--;
        }
        temp++;
    }
    for(int i = 0;  i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}