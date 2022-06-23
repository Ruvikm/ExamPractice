#include <iostream>
using namespace std;

int main(){

    int a[11];
    int max = -99999, avg, sum = 0;
    for(int i = 0 ; i < 10 ; i++){
        cin >> a[i];
        sum += a[i];
        if(max < a[i])
            max = a[i];
    }
    cout<< "max:" << max << endl;
    cout<< "avg:" << sum/10 << endl;
    return 0;
}