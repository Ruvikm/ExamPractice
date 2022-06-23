#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){

    int n;
    int k = 0;
    int a[101];
    cin >> n;
    for(int i = 0 ; i < n ;i++){
        int item;
        cin >> item;
        if(item % 2 != 0)
            a[k++] = item;
    }
    //排序
    for(int i = 0 ; i < k ; i++){
        for(int j = 0; j < k; j++){
            if(a[i] < a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    //输出
    for(int i = 0; i < k ; i++){
        cout << a[i] << " ";
    }
    return 0;
}