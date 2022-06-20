// Created on Ruvik’s ipad.

#include <iostream>
using namespace std;

int** getTriangle(int n){
    int** data = new int*[n];
    for(int i=0;i<n;i++){
        data[i] = new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i == j)
                data[i][j] =1;
            else
                data[i][j] = data[i-1][j]+data[i-1][j-1];
        }
    }
    return data;
}

void showTriangle(int** data,int n){
    for(int i=0;i<n;i++){
        for(int k = n ;k >=i;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<data[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"输入层数"<<endl;
    cin>>n;
    int **data = getTriangle(n);
    cout<<"输出的杨辉三角为:"<<n<<endl;
    showTriangle(data,n);
    return 0;
}