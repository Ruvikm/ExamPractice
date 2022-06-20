#include <iostream>
#include <string>
using namespace std;

void Move(string start,string end){
    cout << start << "->" << end << endl;
}

void Hanoi(int n,string A,string B,string C){
    if(n == 1)
        Move(A,C);
    else{
        Hanoi(n-1,A,C,B);
        Move(A,C);
        Hanoi(n-1,B,A,C);
    }
}
int main(){

    int n;
    string A = "A柱";
    string B = "B柱";
    string C = "C柱";
    cin >> n;
    Hanoi(n,A,B,C); 
    return 0;
}