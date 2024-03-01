#include <iostream>
using namespace std;

void make(int arr[3][3]){
    int num;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> num;
            arr[i][j] = num;
        }
    }
}

int main() {
    int arr1[3][3], arr2[3][3], n;
    make(arr1);
    make(arr2);
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            n = arr1[i][j] * arr2[i][j];
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}