#include<iostream>
using namespace std;
int main()
{
    //Allocation +Deallocation
    int b[100] = {0};
    cout<<sizeof(b)<<endl;//we get this from symbol tabel
    //here b can't be overwritten,b is a part of read only memory

    //Dynamic Allocation
    int n ;
    cin>>n;
    int *a = new int[n]{0};
    cout<<sizeof(a)<<endl;
    cout<<a<<endl; // Variable a that is created inside the static memory ->Overwritten


    //No change
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    //Freeup the space
    delete[]a;
 return 0;
}r5