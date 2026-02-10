// #include<iostream>
// using namespace std;

//Pass by value
// void increment(int a){

//     a=a+1;
//     cout<<"Inside a function :"<<a<<endl;
// }

// int main()
// {
//   int a = 10;
//   increment(a);
//   cout<<"Inside main :"<<a;   
//   return 0;
// }


//  Here we go the value as Inside a function = 11 and Inside main = 10

#include<iostream>
using namespace std;

//Pass by reference
void increment(int *a){
    *a = *a+1;
    cout<<"Inside Function :"<<*a<<endl;
}

int main()
{
    int a = 10;
    increment(&a);
    cout<<"Inside main : "<<a;
    return 0;
}

// Earlier we were passing the copy of the variable now we were passing the exact address of the variable using dereferencing operator we've done that 
