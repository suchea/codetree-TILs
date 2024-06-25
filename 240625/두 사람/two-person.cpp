#include <iostream>
using namespace std;

int main() {
    int age1, age2;
    char c1, c2;
    cin >> age1 >> c1;
    cin >> age2 >> c2;
    if((age1 >= 19 && c1 == 'M')||(age2 >= 19 && c2 == 'M'))
        cout << 1;
    else cout << 0;
    return 0;
}