#include <iostream>
#include <array>
using namespace std;

int main() {
    int n; int arr[100]; int cnt = 0;
    cin >> n;
    while(n!=0){
        arr[cnt] = n;
        cnt++;
        cin >> n;
    }
    for(int i = 0; i < cnt; i++){
        cout << arr[i] << endl;
    }
    return 0;
}