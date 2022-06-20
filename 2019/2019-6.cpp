#include <iostream>
using namespace std;

bool IsPrime(int num){
    for(int i = 2 ;i < num ; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int main(){

    int n;
    cin >> n;
    int sum = 0;
    int count = 0;
    for(int i = n + 1 ; count != 5 ; i++){
        if(IsPrime(i)){
            sum += i;
            count ++;
        }
    }
    cout << sum << endl;
    return 0;
}