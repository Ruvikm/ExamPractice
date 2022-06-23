#include <iostream>
using namespace std;

int ReversePrint(int num){
    if(num < 1)
        return -1;
    else
        cout << num % 10;
        return ReversePrint(num/10);
}
int main(){

    int num;
    cin >> num;
    ReversePrint(num);
    return 0;
}