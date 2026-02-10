#include<iostream>
using namespace std;
int main(){
    char c[10][10];
    c[0][0] = 'A';
    char b [][10]  = {{'a','b','c','\0'},{'d','e','f','\0'}};
    char a [][10] = {"ab","def","ghi"};

    cout<<b[0]<<endl;
    cout<<a[1]<<endl;

    return 0;
}