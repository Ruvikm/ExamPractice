// Created on Ruvik’s ipad.

#include <iostream>
using namespace std;


int MySum(int n,int m){
    int sum =0;
    for(int i=n;i<=m;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}


int main() {
    int n=3,m=10;
    cout<<n<<"--"<<m<<endl;
    cout << MySum(n,m)<<endl;
    return 0;
}