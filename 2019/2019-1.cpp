#include <iostream>
using namespace std;

void GiveMark(int score){
    if(score >=90)
        cout <<"A"<<endl;
    else if(score >=80 && score <=89)
        cout <<"B"<<endl;
    else if(score >= 70 && score <= 79)
        cout <<"C"<<endl;
    else if(score >= 60 && score <= 69)
        cout <<"D"<<endl;
    else
        cout <<"E"<<endl;
}

int main(){
    int score;
    cin >> score;
    GiveMark(score);
    return 0;
}