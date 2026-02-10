#include<iostream>
using namespace std;
void dec(int n){

//Base case
    if ( n == 0){
    return;
    }
    ///rec case
    cout<< n <<" ";  // top to base case
    dec(n-1);

}
 void inc (int n){
    if(n==0){
        return;
    }
    inc(n-1);  // bottom to up case
    cout<<n<<" ";

 
 }

int main()
{
    int n;
    cin>>n;
    dec(n); 
    cout<<endl;
    inc(n);
    cout<<endl;

}