#include <iostream>
using namespace std;

int getSum(int n){

    if(n == 0){
        return 0;
    }
        
    else{
        int num;
        cin >> num;
        return getSum(n-1) + num;
    }

}

int main(){

    int n;
    cin >> n;
    cout << getSum(n) <<endl;
    return 0;
}