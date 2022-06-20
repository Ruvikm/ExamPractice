#include <iostream>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;
    int min = m<n?m:n;
    int max = m>n?m:n;
    for(int i= min;i<=max;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}