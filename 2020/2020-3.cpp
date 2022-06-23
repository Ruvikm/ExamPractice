#include <iostream>
using namespace std;

void triangle(int n){
    int a[21][21] = {0};
    for(int i = 1 ; i <= n ; i++){
        a[i][1] = 1 , a[i][i] = 1;
        for(int j = 1 ; j <= i - 1 ; j++){
            a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
    }
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <=n ;j++){
            if(a[i][j])
                cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cin >> n;
    triangle(n);
    return 0;
}