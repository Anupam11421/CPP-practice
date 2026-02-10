#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n ,key;
    cin>>n;
    int a[1000]; // size of the array depend on the constraints of the question
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
// Algorithm to find largest and smallest in the array
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i=0;i<n;i++){
       /*if(a[i]>largest){
            largest=a[i];
        }
        if(a[i]<smallest){
        smallest=a[i];
        } */
       largest=max(largest,a[i]); // if you want to avoid if else condition
       smallest=min(smallest,a[i]);
    }
      cout<<"largest "<< largest <<endl;
      cout<<"smallest "<< smallest <<endl;
return 0;
}
