#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 30, c = a + b;
    a = c/8; b = c%8;
    cout << a << endl << b;
    return 0;
}