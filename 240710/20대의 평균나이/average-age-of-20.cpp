#include <iostream>
using namespace std;

int main() {
    int n = 0;
    float age, sum = 0;
    cout << fixed;
    cout.precision(2);
    while(1) {
        cin >> age;
        if(age >= 30 || age < 20) {
            cout << sum / n;
            break;
        }
        sum += age;
        n++;
    }
    
    return 0;
}