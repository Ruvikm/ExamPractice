#include <iostream>
using namespace std;

int reverse(int num){
    int reverseNum = 0;
    while(num > 0){
        int temp = num % 10;
        reverseNum = reverseNum * 10 + temp;
        num /= 10;
    }
    return reverseNum;
}

int main(){

    int a , b;
    cin >> a >> b;
    int sum = reverse(a) + reverse(b);
    cout << sum << endl;
    cout << reverse(sum) << endl;
    return 0;
}