#include <iostream>
using namespace std;

int main() {
    string s, t; cin >> s >> t;
    string tmp = s;
    s = t; t = tmp;
    cout << s << "\n" << t;
    return 0;
}