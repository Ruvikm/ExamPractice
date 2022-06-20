#include <iostream>
using namespace std;

const int n = 5;

void simulate(int i,int k){
    int num = n;
    int people[n];
    for(int i = 0;i < n;i++)
        people[i] = 0;
    int index = i - 1;
    int currentNum = 1;
    while(num != 0){
        if(index > n)
            index = 0;
        if(currentNum == k && !people[index]){
            cout<<"编号"<<index<<"个人出圈"<<endl;
            people[index] = 1;
            currentNum = 1;
            cout<<"还剩"<<--num<<"人"<<endl;
        }
        if(!people[index]){
            cout<<"编号"<<index<<"报数:"<<currentNum++<<endl;
        }
        
        index++;
    }
}

int main(){

    int i,k;
    cout<<"请输入从谁开始:"<<endl;
    cin>>i;
    cout<<"请输入从报数到几:"<<endl;
    cin>>k;
    simulate(i,k);
    return 0;
}