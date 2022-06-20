#include <iostream>
using namespace std;

bool IsContainThree(int num){
    while(num >= 1){
        int temp = num % 10;
        if(temp == 3)
            return true;
        num /= 10;
    }
    return false;
}

int main(){

    int a,b;
    cin >> a >> b;
    for(int i = a ;i <= b; i++){
        if(IsContainThree(i))
            cout << i << " ";
    }
    return 0;
}