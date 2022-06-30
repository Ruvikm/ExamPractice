#include <iostream>
#include <math.h>
using namespace std;

int getValue(char item){
    switch(item){
        case 'A' : return 10;
        case 'B' : return 11;
        case 'C' : return 12;
        case 'D' : return 13;
        case 'E' : return 14;
        case 'F' : return 15;
        default : return item - '0';
    }
}

int transfer(char str[]){
    int len = 0;
    int num = 0;
    for(; str[len]!= '\0';len++);
    for(int i = len - 1 ; i >= 0 ;i--){
        if(str[i]>='0' && str[i]<='9' || str[i]>='A' && str[i]<='F')
            num += getValue(str[i]) * pow(16,len - i - 1);
    }
    return num;
}

int main(){

    char str[9];
    cin >> str;
    cout << transfer(str) << endl;
    return 0;
}