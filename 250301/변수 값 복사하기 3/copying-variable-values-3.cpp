#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;
    a = c; b = c;
    cout << a << endl << b << endl << c;
    return 0;
}