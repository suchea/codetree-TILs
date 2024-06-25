#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    if(m <= 2 || m == 12)
        cout << "Winter";
    else if(m <= 5)
        cout << "Spring";
    else if(m <= 8)
        cout << "Summer";
    else
        cout << "Fall";
    return 0;
}