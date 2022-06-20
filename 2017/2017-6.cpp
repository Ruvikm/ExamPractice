#include <iostream>
using namespace std;

void Reverse(char str[],int k){
    if(str[k]=='.')
        return;
    else{
        Reverse(str,k+1);
        cout<<str[k];
    }
}

int main(){
    char str[999];
    cin>>str;
    Reverse(str,0);
    return 0;
}