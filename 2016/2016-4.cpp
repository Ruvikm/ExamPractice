#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sortMatrix(int data[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){//每趟决定一个元素的位置
            if(data[j]>data[j+1]){//若左边 > 右边
                swap(data[j],data[j+1]);
            }
        }
    }
}

void createData(int Matrix[3][4]){
    srand(time(0));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            Matrix[i][j] = rand() % 100 + 1;
        }
    }
}

void showData(int Matrix[3][4]){
    for(int i=0;i<3;i++){
        for(int j =0;j<4;j++){
            cout<<Matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int Matrix[3][4];
    createData(Matrix);
    cout<<"排序前:"<<endl;
    showData(Matrix);
    cout<<"排序后:"<<endl;
    for(int i =0;i<3;i++)
        sortMatrix(Matrix[i],4);
    showData(Matrix);
    return 0;
}