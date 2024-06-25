#include <iostream>
using namespace std;

int main() {
    int am, ae, bm, be;
    cin >> am >> ae >> bm >> be;
    if(am > bm||(am == bm && ae > be))
        cout << "A";
    else
        cout << "B";
    return 0;
}