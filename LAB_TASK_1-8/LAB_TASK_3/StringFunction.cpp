#include<iostream>
#include<cstring>
using namespace std;
int main(){
char str1[10]="Hello";
char str2[10]="world";
char str3[10];
int len;
//copy str1 into str3
strcpy (str3, str1);
cout<<"strcat(str1,str2):"<<str1<<endl;
//total length of strl after concatenation
len =strlen(str1);
cout<<"strlen(str1):"<<len<<endl;
return 0;
}