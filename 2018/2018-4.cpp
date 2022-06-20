#include <iostream>
using namespace std;

int getSum(int a[11][11],int N){
    int sum = 0;
    int max = -99999;
    for(int i = 0;i < N; i++){
        max = -999999;
        for(int j = 0;j < N; j++){
            if(max < a[j][i])
                max = a[j][i];
        }
        sum += max;
    }
    return sum;
}

int main(){

    int a[11][11];
    int N;
    cin >> N;
    for(int i = 0;i < N; i++){
        for(int j = 0;j< N;j++){
            cin >> a[i][j];
        }
    }
    cout << getSum(a,N)<<endl;
    return 0;
}