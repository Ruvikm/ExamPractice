#include <iostream>
using namespace std;

int MakeSnake(int a[11][11], int n) {

    int currentNum = 1;
    int i, j; // i,j表示矩阵的行列坐标
    int k = 1; // k表示当前是第几斜列
    bool flag = true; // true : 向上走 ; false : 向下走
    while (currentNum <= n) {
        if (flag) { // 如果是向上走
            i = k++, j = 1;
            while (i) 
                a[i--][j++] = currentNum++;
            flag = false;
        }
        else {
            i = 1, j = k++;
            while (j)
                a[i++][j--] = currentNum++;
            flag = true;
        }
    }
    int max = i > j ? i : j;
    return max;
}

int main() {

    int a[11][11] = { 0 };
    int n;
    cin >> n;
    int N = MakeSnake(a, n);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (a[i][j] && a[i][j] <= n)
                cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}