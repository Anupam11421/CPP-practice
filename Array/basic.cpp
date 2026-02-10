#include<iostream>
using namespace std;
int main()
{
    //this is called initialization 
    int a[10]={0of array};
     
    // sizeof
    cout<<sizeof(a)<<endl;
    int n = sizeof(a)/sizeof(int);
    cout<<n<endl;


    // taking input all from the user 
    for(int i=0;i<5;i++){ 
        cin>>a[i];    
    }


    for(int i=0;i<10;i++){
        cout<< a[i] <<" , ";
    }
 return 0;
}