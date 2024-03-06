#include <iostream>
using namespace std;

void make(int arr[][10], int x, int y) {
    int num;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++){
            cin >> num;
            arr[i][j] = num;
        }
    }
}

int main() {
    int x, y, arr1[10][10], arr2[10][10];
    cin >> x >> y;
    make(arr1, x, y);
    make(arr2, x, y);

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            if(arr1[i][j] == arr2[i][j])
                cout << "0 ";
            else
                cout << "1 "; 
        }
        cout << endl;
    }
    return 0;
}