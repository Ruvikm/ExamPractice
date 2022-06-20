#include <iostream>

using namespace std;

int gcd1(int m,int n){//求最大公约数——递归法
    if(m%n==0)
        return n;
    else
        return gcd1(n,m%n);
}

int gcd2(int m,int n){//求最大公约数——非递归法
    int c = 0;
    while(m%n!=0){
        c = m%n;
        m = n ;
        n = c;
    }
    return n;
}

//最小公倍数 = m * n / 最大公约数

int main(){
    int m,n;
    cin>>m>>n;
    if(m<0)
        m = -m;
    if(n<0)
        n = -n;
    int maxC = gcd2(m,n);
    cout<<"最大公约数为:"<<maxC<<endl;
    cout<<"最小公倍数为:"<<m*n/maxC<<endl;
    return 0;
}