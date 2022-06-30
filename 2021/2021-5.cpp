#include <iostream>
using namespace std;

void fill(int a[30][30], int n){
    int current = 1; //当前数字
    int step = n; //每次填充的数量
    int i = 1, j = 1;//二维数组的横纵坐标
    while(true){
        //向右填充
        for(int k = 0; k < step; k++){
            a[i][j++] = current++;
        }
        j -= 2 , i++; 
        // cout << i <<" "<< j << endl;
        step--;
        if(!step)
            break;
        // cout <<"current:"<< current << endl;
        //向左下填充
        for(int k = 0; k < step; k++){
            a[i++][j--] = current++;
        }
        i -= 2 , j++;
        // cout << i <<" "<< j << endl;
        step--;
        if(!step)
            break;
        // cout <<"current:"<< current << endl;
        //向上填充
        for(int k = 0; k < step; k++){
            a[i--][j] = current++;
        }
        step--;
        if(!step)
            break;
        i++, j++; 
        // cout << i <<" "<< j << endl;
        // cout <<"current:"<< current << endl;
    }
}

int main(){

    int a[30][30] = {0};
    int n;
    cin >> n;
    fill(a,n);
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n; j++){
                if(a[i][j]>=1 && a[i][j]<=9)
                    cout << a[i][j] << "   ";
                if(a[i][j]>=10 && a[i][j]<=99)
                    cout << a[i][j] << "  ";
                if(a[i][j]>=100 && a[i][j]<=999)
                    cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}