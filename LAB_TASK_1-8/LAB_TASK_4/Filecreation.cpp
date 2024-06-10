#include <iostream>
#include <fstream>
using namespace std;
int main(){
//create and open a text file
ofstream Myfile("examplefile.txt");
ofstream outfile;
outfile.open("examplefile.txt", ios::out|ios::trunc);
//close the file
Myfile.close();
//if (Myfile.is_open()){/*ok,proceed*/}
return 0;
}