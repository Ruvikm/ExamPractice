#include <iostream>
using namespace std;

void Calculate(int a[31][31], int N, int M){
    int b[31][31];
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            b[i][j] = a[i][j];
        }
    }
    int result[31][31] = {0};
    int item = 0;
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < M ; m++){
            for(int i = 0, j = 0 ; i < N && j < N ; i++,j++){
                result[n][m] += a[n][i] * b[j][m];
            }        
        }
    }
    
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){

    int N, M;
    int a[31][31];
    cin >> N >> M;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> a[i][j];
        }
    }
    Calculate(a,N,M);
    return 0;
}