#include <iostream>
using namespace std;

int main() {
    int n; int a = 25;
    while(cin >> n){
        if(n>a){
            cout << "Lower" << endl;
        }
        else if(n<a){
            cout << "Higher" << endl;
        }
        else{
            cout << "Good" << endl;
            break;
        }
    }
    return 0;
}