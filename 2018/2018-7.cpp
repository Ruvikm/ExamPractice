#include <iostream>
#include <cstdio>
using namespace std;

class People{
    public:
       char name[100];
       int year;
       int month;
       int day;
};
void swap(People &a,People &b){

    People temp = a;
    a = b;
    b = temp;
}

bool MySort(People a,People b){
    if(a.year != b.year)
        return a.year > b.year;
    else if(a.month != b.month)
        return a.month > b.month;
    else
        return a.day > b.day;
}

int main(){

    int n;
    cin >> n;
    People student[40];
    for(int i = 0;i < n;i++){
        cin >> student[i].name;
        scanf("%4d/%2d/%2d",&student[i].year,&student[i].month,&student[i].day);
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(MySort(student[i],student[j])){
                swap(student[i],student[j]);   
            }
        }
    }
    for(int i = 0;i < n;i++){
        cout <<student[i].name<<" "<<student[i].year<<"/"<<student[i].month<<"/"<<student[i].day<<endl;
    }
    return 0;
}