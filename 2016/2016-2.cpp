// Created on Ruvik’s ipad.

#include <iostream>
using namespace std;


int factorial(int n){
    int sum = 1;
    for(int i=n;i>1;i--){
        sum *= i;
    }
    return sum;
}

int main() {
    double e=0.0;
    for(int i=0;1.0/factorial(i)>1e-6;i++){
        double item = 1.0/factorial(i);
        //cout<<item<<endl;
        e+=item;
    }
    cout<<e<<endl;
    return 0;
}