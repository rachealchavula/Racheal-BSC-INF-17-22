#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str1[10] = "Hello";
    char str2[10] = "Wolrd";
    char str3[10];
    int len;

    // copy str1 into stgr3
    strcpy(str3, str1);
    cout<<"Strcpy (str3, str1)"<<str3<<endl;

    //Concatenates str1 and str2
    strcat(str1, str2);
    cout<<"strcat(str1, str2): "<<str1<<endl;
    
    //total length of strl after concatenation
    len = strlen(str1);
    cout<<"strlean(str1) : "<<len<<endl;

}