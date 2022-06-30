#include <iostream>
using namespace std;

int main(){

    for(int i = 200; i <= 500; i++){
        if(i % 3 ==0 && i % 7 == 0 && i % 2 == 0)
            cout << i << " ";
    }
    return 0;
}