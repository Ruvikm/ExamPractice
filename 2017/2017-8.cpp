#include <iostream>
using namespace std;

int main(){

    int a1[6];
    int a2[6];
    int a3[13];
    cout<<"输入第一个有序序列:"<<endl;
    for(int i = 0;i < 6; i++)
        cin>>a1[i];
    cout<<"输入第二个有序序列:"<<endl;
    for(int i = 0;i < 6; i++)
        cin>>a2[i];
    int i = 0, j = 0 , k = 0;
    while(i!=6 &&j!=6){
        if(a1[i]<a2[j])
            a3[k++] = a1[i++];
        else
            a3[k++] = a2[j++];
    }
    while(i!=6)
        a3[k++] = a1[i++];
    while(j!=6)
        a3[k++] = a2[j++];
    
    cout<<"合并后的序列:"<<endl;
    for(int i = 0 ;i < 12; i++)
        cout<<a3[i]<<" ";
    return 0;
}