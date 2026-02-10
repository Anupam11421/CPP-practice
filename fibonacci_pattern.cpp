#include<iostream>
using namespace std;
// fibonacii number -- nth fibonacii number 

int fibonacii(int n){
    int a=0;
    int b=1;
    int c=0;
     
    for(int i=1;i<=n-1;i++) {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main(){
    int n ;
    cin>>n;
    cout<<fibonacii(n)<<endl;
    return 0;
}