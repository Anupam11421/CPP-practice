#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a[1000];
    int cs = 0;
    int ms = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // Kadanes algorithm for Maximum subarray
    
    for(int i=0;i<n;i++){
        cs = cs + a[i];
        if(cs<0){
            cs =0;
        }
        ms = max(cs,ms);
    }

    cout<<"maximum is "<< ms <<endl;

 return 0;
}

// now when we see this -4 1 3 -2 6 2 -8 -9 4 it's sum is 10