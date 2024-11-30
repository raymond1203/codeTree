#include <iostream>
using namespace std;

int main() {
    int a = 3; 
    int b = 5;
    int tmp = b;
    b = a;
    a = tmp;
    cout << a << "\n" << b;
    return 0;
}