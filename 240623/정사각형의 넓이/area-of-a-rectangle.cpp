#include <iostream>
using namespace std;

int main() {
    int n, size;
    cin >> n;
    size = n * n;
    cout << size << endl;
    if(n < 5) {
        cout << "tiny";
    }
    return 0;
}