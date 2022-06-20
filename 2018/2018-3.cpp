#include <iostream>
using namespace std;

int CountWords(char str[]){

    int countLetter = 0;
    int countWords = 0;
    for(int i = 0;str[i]!='\0';i++){
        if((str[i]>='a'&&str[i]<='z') || str[i]>='A'&&str[i]<='Z')
            countLetter++;
        if(str[i]==' ' && countLetter!=0){
            countLetter = 0;
            countWords++;
        }
    }
    if(countWords!=0) countWords++;
    return countWords;
}

int main(){

    char str[101];
    cin.get(str,100);//可以输入空格，以回车结束
    cout<<"单词个数为:"<<CountWords(str)<<endl;
    return 0;
}