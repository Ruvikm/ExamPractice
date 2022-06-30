#include <iostream>
#include <cstdio>
using namespace std;

class Date{
    public:
        int year;
        int month;
        int day;
};

void swap(Date &a, Date &b){
    
    Date temp = a;
    a = b;
    b = temp;
}

int Compare(Date date1 , Date date2){
    if(date1.year != date2.year)
        return date1.year-date2.year;
    else if(date1.month != date2.month){
        return date1.month-date2.month;
    }
    else
        return date1.day-date2.day;
}

int main(){

    Date date[30];
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        scanf("%d/%d/%d",&date[i].month,&date[i].day,&date[i].year);
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ;j++){
            if(!Compare(date[i],date[j])){
                swap(date[i],date[j]);
            }
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        printf("%d/%d/%d\n",date[i].month,date[i].day,date[i].year);
    }
    return 0;
}