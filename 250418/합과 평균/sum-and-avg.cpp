#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b; float avg;
    cin >> a >> b;
    avg = (float(a) + b) / 2;
    cout << fixed << setprecision(1);
    cout << a+b << " " << avg;
    return 0;
}