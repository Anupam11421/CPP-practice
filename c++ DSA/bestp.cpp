// Program for printing all the subarray in the given array
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  // this is for the maximum no of element 
  int a[1000]; 
   for (int i=0;i<n;i++){
    cin>>a[i];
   }

  // Generate all the subarray in the given aray
  for(int i = 0 ; i<n ; i++){
     for(int j=i ; j<n ; j++){

        //Elements of subarray (i,j)
        for(int k=i ; k<=j ; k++){
            cout<<a[k]<<" , ";
        }
        cout<<endl;
    }
  } 

  return 0 ;
}