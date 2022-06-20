#include <iostream>
using namespace std;

int main(){

    int a[9],b[9];
    int N = 8;
    int k = 0;
    for(int i = 0 ;i < N ; i++){
        cin >> a[i];
        if(a[i] % 2 != 0)
            b[k++] = a[i];
    }
    for(int i = k - 1 ;i >= 0;i--)
        cout << b[i] << " ";
    return 0;
}