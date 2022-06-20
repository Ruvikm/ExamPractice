#include <iostream>
#include <string>
using namespace std;

int ToDecimalism(int num){//九进制转十进制
    
    int decimalism = 0;
    int count = 0;
    while(num){
        int digit = num % 10;
        num /= 10;
        int item = 1;
        for(int i = 0; i<count;i++){
            item *= 9;
        }
        item *=digit;
        decimalism += item;
        count++;
    }
    return decimalism;
}


string ToNineteen(int num){

    string str;
    while(num){
        int digit = num % 19;
        if(digit < 10)
            str += digit + '0';
        else
            str += digit + 'a' - 10;
        num /= 19;
    }
    reverse(str.begin(),str.end());
    return str;
}

int main(){

    int num;
    cin >> num;
    int TenBase = ToDecimalism(num);
    string NineTeenBase = ToNineteen(TenBase);
    cout<<NineTeenBase<<endl;
    return 0;
}