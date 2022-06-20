#include <iostream>
using namespace std;

bool IsLeapYear(int year){
    return (year%4==0&&year%100!=0) || (year%400==0);
}
int main(){

    int birthYear,birthMonth,birthDay;
    cin >> birthYear >>birthMonth >>birthDay;
    int count = 0;
    int i;
    if(birthMonth > 2){
        i = birthYear + 1;
    }
    for(;i <= 2018; i++){
        if(IsLeapYear(i))
            count++;
    }
    cout << count << endl;
    return 0;
}