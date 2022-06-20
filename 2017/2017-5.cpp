#include <iostream>
using namespace std;

int MyStrlen(char* str){
    int num = 0;
    for(int i = 0;str[i]!='\0';i++){
        if((str[i]>='a'&&str[i]<='z') ||(str[i]>='A'&&str[i]<='Z'))
            num++;
    }
    return num;
}

int main(){

    char s[999];
    cin>>s;
    char* str = s;
    cout<<"英文字符个数为:"<<MyStrlen(str)<<endl;
    return 0;
}