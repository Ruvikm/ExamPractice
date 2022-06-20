#include <iostream>
using namespace std;

int getSum(char str[101]){
    int sum = 0;
    int i = 0;
    int CurrentNum = 0;
    while(str[i]!='\0'){
        if(str[i]>='0' && str[i]<='9'){
            while(str[i]>='0' && str[i]<='9'){
                int temp = str[i] - '0';
                CurrentNum *=  10;
                CurrentNum += temp;
                i++;
            }
            // cout <<"CurrentNum : "<< CurrentNum << endl;
            sum += CurrentNum;
            CurrentNum = 0;
        }
        else
            i++;
    }
    return sum;
}

int main(){

    char str[101];
    cin >> str;
    cout << getSum(str) << endl;
    return 0;
}