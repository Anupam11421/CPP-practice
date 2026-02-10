// Maximun sum subarray 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int a[10000];
    int MaximumSum = 0;
    int currentSum = 0;
    int left = -1;
    int right = -1;

    for(int i =0;i<n;i++){
      cin>>a[i];
    }

      // Generate all the subarray in the given aray
      for(int i = 0 ; i<n ; i++){
         for(int j=i ; j<n ; j++){

        //Elements of subarray (i,j)
          currentSum = 0 ;
          for(int k=i ; k<=j ; k++){
            currentSum += a[k];   // -4 1 3 -2 6 2 -8 -9 4
          }
          // update maximum if cs > maximum
        // cout<<currentSum<<endl;
         if(currentSum>MaximumSum){
            MaximumSum=currentSum;
            left = i;
            right = j;
         }
        }
       } 
    // Print the maximum sum 
    cout<<" MaximumSum is "<< MaximumSum <<endl;

    //print the subarray
    for(int k=left ; k<=right ; k++){
       cout<<a[k]<<","; 
    }

 return 0;
}

// but  thi s code in not optimized as more it oreder is ~n^3 may be it best for 100 but not best for 1000 so we need to do more optimized 
