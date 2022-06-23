#include <iostream>
using namespace std;

bool IsPrime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

bool IsPalindromes(int num){
    int OriginNum = num, temp = 0;
    while(num){
        temp = temp * 10 + num % 10;
        num /=10;
    }
    if(temp == OriginNum)
        return true;
    else
        return false;
}

int main(){

    int a, b;
    cin >> a >> b;
    for(int i = a ; i <= b ; i++){
        if(IsPalindromes(i) && IsPrime(i))
            cout << i << " ";
    }
    return 0;
}