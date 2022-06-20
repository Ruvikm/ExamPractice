#include <iostream>
using namespace std;

int main(){

    int choice = 0;
    while(true){
        cout << "请输入指令,1-加,2-减,3-乘,4-除,5-退出" << endl;
        cin >> choice;
        if(choice == 5){
            break;
        }
        int a , b;
        cin >> a >> b;
        switch (choice){
            case 1:{
                cout << a + b << endl;
                break;
            }
            case 2:{
                cout << a - b << endl;
                break;
            }
            case 3:{
                cout << a * b << endl;
                break;
            }
            case 4:{
                if(b){
                    cout << a / b << endl;
                }else{
                    cout << "被除数不能为0!" << endl;
                }
                break;
            }
            default:{
                cout << "指令错误!" << endl;
            }
        }
    }
    return 0;
}