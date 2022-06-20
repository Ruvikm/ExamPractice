#include <iostream>
using namespace std;

class People{
    public:
        int score;
        int place;
};

void swap(People * a,People *b){
    People temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    People people[11];
    int score = 1;
    int site = 1;
    while(true){
        cin >> score;
        if(score == -1)
            break;
        else{
            people[site].score = score;
            people[site].place = site;
            site++;
        }
    }
    for(int i = 1 ; i < site ; i++){
        for(int j = 1; j < site ; j++){
            if(people[i].score > people[j].score){
                swap(&people[i],&people[j]);
            }
        }
    }
    for(int i = 1 ; i < site ; i++){
        cout << people[i].place << "号" << people[i].score << "分" << endl; 
    }
    return 0;
}