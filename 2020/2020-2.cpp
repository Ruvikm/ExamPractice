#include <iostream>
using namespace std;

int main(){

    int a[999]={0};
    a[1] = 1, a[2] = 1;
    for(int i = 3 ; i < 999; i++){
        a[i] = a[i-1] + a[i-2];
    }
    int n;
    long long sum = 0;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}