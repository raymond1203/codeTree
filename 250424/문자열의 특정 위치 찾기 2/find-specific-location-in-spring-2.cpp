#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char s; cin >> s; int cnt = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i][2] == s || arr[i][3] == s){
            cout << arr[i] << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}