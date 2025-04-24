#include <iostream>
using namespace std;

int main() {
    int n; cin >> n; int sum = 0, cnt = 0;
    while (sum < n){
        cnt++;
        sum+=cnt;
    }
    cout << cnt;
    return 0;
}