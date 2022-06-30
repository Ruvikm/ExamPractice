#include <iostream>
using namespace std;

int MyStringSum(char *str){
    int sum = 0;
    for(int i = 0 ; str[i] != '\0'; i++){
        sum +=str[i];
    }
    return sum;   
}

int main(){

    char str[101];
    cin >> str;
    cout << MyStringSum(str) << endl;
    return 0;
}