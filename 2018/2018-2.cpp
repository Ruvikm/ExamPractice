#include <iostream>
#include <cstdio>
using namespace std;

bool IsPalindromic(int num){
    int data[9999] = {-1};
    int i = 0;
    while(num){
        data[i++] = num % 10;
        num /= 10;
    }
    int len =  i;
    for(int i = 0, j = len - 1 ;i <= j; i++ , j--){
        if(data[i] != data[j])
            return false;
    }
    return true;
}
int main(){

    int num;
    while(cin >> num){
        if(num == -1)
            break;
        if(IsPalindromic(num))
            cout << num << endl;
    }
    return 0;
}