#include <iostream>
#include <fstream>
using namespace std;
int main(){
ofstream Myfile("examplefile.txt");

if (Myfile.is_open()){
    Myfile<< "This is a line. \n";
     Myfile<< "This is another line. \n";
      Myfile.close();
}
else {
    cout<<"unable to open file";
}
return 0;
}