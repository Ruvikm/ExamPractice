#include <iostream>
using namespace std;

void split(int n){
    // do{
    //     int temp = n%10;
    //     n /=10;
    //     cout<<temp<<endl;
    // }while(n>0);
    if(n<=0){
        return;
    }
    else{
        cout<<n%10<<" ";
        return split(n/10);
    }
}
int main(){
    int n = 123456789;
    split(n);
    return 0;
}