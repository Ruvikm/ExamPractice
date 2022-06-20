#include <iostream>
using namespace std;

int fibonacci[999];

int getF(int k){
    fibonacci[0] = 0 ,fibonacci[1] = 1;
    for(int i=2;i<999;i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    if(k<999)
        return fibonacci[k];
    else
        return -1;
}
double calculate(int N){
    double sum = 0.0;
    for(int i =1 ; i<=N;i++){
        sum +=  getF(i+2)*1.0/getF(i+1);
    }
    return sum;
}

int main(){

    int N;
    cin>>N;
    cout<<calculate(N)<<endl;
    return 0;
}