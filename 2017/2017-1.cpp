#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int data[3];
    data[0]=a;
    data[1]=b;
    data[2]=c;
    int max = -9999;
    for(int i=0;i<3;i++){
        if(data[i]>max)
            max = data[i];
    }
    cout<<"最大的数为:"<<max<<endl;
    return 0;
}