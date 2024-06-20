#include <iostream>

int main() {
    int a= 5, b = 6, c = 7, temp;
    temp = a;
    a = c;
    c = b;
    b = temp;
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}