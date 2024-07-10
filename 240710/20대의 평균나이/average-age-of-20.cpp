#include <iostream>
using namespace std;

int main() {
    int n = 0;
    float age, sum = 0;
    cout << fixed;
    cout.precision(2);
    while(1) {
        cin >> age;
        if(age >= 30)
            break;
        sum += age;
        n++;
    }
    cout << sum / n;
    return 0;
}