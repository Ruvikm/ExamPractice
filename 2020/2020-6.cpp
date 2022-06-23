#include <iostream>
using namespace std;

double calculate(int a, int b, char op){
    switch (op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':{
            if(b){
                return a * 1.0 / b;
            }
            else{
                return -1;
            }
        }
        default: return -1;
    }
}
int main(){

    int n;
    cin >> n;
    while(n--){
        int a , b;
        char op;
        cin >> a >> op >> b;
        cout << calculate(a,b,op) << endl;
    }
    return 0;
}