#include<iostream>
#include<string>
using namespace std;
int main(){
//string greeting="Hello";
//cout<<greeting;
//return 0;
string str1="Hello";
string str2="world";
string str3;
int len;
//copy str1 into str3
str3=str1;
cout<<"str3:"<<str3<<endl;
//concatinates str1 and str2
str3=str1+str2;
cout<<"str1 + str2:"<<str3<<endl;
//total lenth of str3 after concatenation
len=str3.size();
cout<<"str3.size():"<<len<<endl;

return 0;
}