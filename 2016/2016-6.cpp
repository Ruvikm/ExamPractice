#include <iostream>
using namespace std;


bool isNumber(char c){
    if(c >='0' && c <= '9')
        return true;
    else
        return false;
}

int Statistics(char s[]){
    int len = 0;
    int count = 0;
    for(int i=0;s[i]!='\0';i++,len++);
    int j=0;
    int k = 0;//记录连续的数字个数
    while(1){
        if(k>0){
            count++;
            k=0;
        }
        if(s[j]=='\0')
            break;
        if(isNumber(s[j])){
            while(isNumber(s[j])){
                j++;
                k++;
            }
        }else{
            j++;
        }
        
    }
    return count;
}

int main(){
    char s[30];
    cout<<"请输入字符串:"<<endl;
    cin >> s;
    cout<<"整数个数为:"<<Statistics(s)<<endl;
    return 0;
}