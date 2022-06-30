#include <iostream>
using namespace std;

int CompareStr(char s1[], char s2[]){
    int i = 0, j = 0;
    while(s1[i]!='\0' && s2[j]!='\0'){
        if(s1[i] != s2[j])
            return s1[i] - s2[j];
        i++, j++;
    }
    if(s1[i] == '\0' && s2[j] != '\0')
        return -(s2[j] - '0');
    else if(s1[i] != '\0' && s2[j] == '\0')
        return s1[i] - '0';
    else 
        return 0;
}

int main(){

    char s1[101], s2[101];
    cin >> s1 >> s2;
    cout << CompareStr(s1,s2) << endl;
    return 0;
}