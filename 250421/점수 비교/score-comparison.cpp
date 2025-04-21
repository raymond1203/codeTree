#include <iostream>
using namespace std;

int main() {
    
    int ax, ay, bx, by;
    cin >> ax >> ay;
    cin >> bx >> by;

    if(ax>bx && ay>by) {
        cout << 1;
    }
    else{
        cout << 0;
    }

    return 0;
}