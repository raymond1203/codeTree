#include <iostream>
using namespace std;

int main() {
    int f, e; cin >> f >> e; int sum = 0;
    for(int i = f; i <= e; i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout << sum;
    return 0;
}