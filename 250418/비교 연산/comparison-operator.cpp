#include <iostream>
using namespace std;

void decision(int a, int b, string s) {
    if (a s b) {
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}

int main() {
    int a, b; cin >> a >> b;
    decision(a, b, >=);
    decision(a, b, >=);
    decision(a, b, >=);
    return 0;
}