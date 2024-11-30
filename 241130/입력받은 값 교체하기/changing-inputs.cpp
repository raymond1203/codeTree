#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int tmp = b; b = a; a = tmp;
    cout << a << " " << b;
    return 0;
}