#include <iostream>
using namespace std;

bool IsPrime(int a){
    for(int i =2;i<a;i++){
        if(a%i==0)
            return false;
    }
    return true;
}

int main(){

    int a,b;
    cin>>a>>b;
    int count = 0;
    for(int i = a+1;i<b;i++){
        if(IsPrime(i)){
            cout<<i<<" ";
            count++;
            if(count==5){
                count = 0;
                cout<<endl;
            }
        }
    }    
    return 0;
}