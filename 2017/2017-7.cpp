#include <iostream>
#include <cstdio>
using namespace std;

int lyear,lmonth,lday;
int byear,bmonth,bday;

bool IsLeapYear(int year){
    if((year%4==0&&year%100!=0) ||(year%400==0))
        return true;
    return false;
}

//DayInYear能根据给定的日期，求出它在该年的第几天
int DayInYear(int year,int month,int day){

    int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//平常的月份
    if(IsLeapYear(year))
        months[2] = 29;
    for(int i=1;i<=month-1;i++){
        day+=months[i];
    }
    return day;
}
//计算相隔日期
int getDays(){

    int days;
    //如果年月相同
    if(lyear == byear && lmonth == bmonth)
        return lday > bday ? lday - bday : bday - lday;
    //如果年相同月不同
    else if(lyear == byear && lmonth != bmonth){
        int d1 = DayInYear(lyear,lmonth,lday);
        int d2 = DayInYear(byear,bmonth,bday);
        return d1 > d2 ? d1 - d2 : d2 - d1;
    }
    else{
        int d1,d2,d3 = 0;
        if(IsLeapYear(lyear))
            d1 = 366 - DayInYear(lyear,lmonth,lday);
        else
            d1 = 365 - DayInYear(lyear,lmonth,lday);
        d2 = DayInYear(byear,bmonth,bday);
        for(int iyear = lyear + 1;iyear < byear;iyear++){
            if(IsLeapYear(iyear))
                d3 += 366;
            else
                d3 += 365;
        }
        return d1 + d2 + d3;
    }
    return days;
}



int main(){

    cout<<"请输入离开日期:"<<endl;
    scanf("%d-%d-%d",&lyear,&lmonth,&lday);
    cout<<"请输入返回日期:"<<endl;
    scanf("%d-%d-%d",&byear,&bmonth,&bday);
    cout<<"求学总天数为:"<<getDays()<<endl;
    return 0;
}