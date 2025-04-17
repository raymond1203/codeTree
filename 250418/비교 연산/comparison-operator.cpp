#include <iostream>
#include <string>
using namespace std;

void decision(int a, int b, string s) {
    if (s == ">=") {
        cout << (a >= b) << endl;
    }
    else if (s == ">") {
        cout << (a > b) << endl;
    }
    else if (s == "==") {
        cout << (a == b) << endl;
    }
    else if (s == "!=") {
        cout << (a != b) << endl;
    }
    else {
        cout << "Invalid operator" << endl;
    }
}

int main() {
    int a, b; cin >> a >> b;
    decision(a, b, ">=");
    decision(a, b, ">");
    decision(b, a, ">=");
    decision(b, a, ">");
    decision(a, b, "==");
    decision(a, b, "!=");
    return 0;
}
