#include<iostream>
using namespace std;

//Compute a^n

int power(int a,int n){   // this is also perfect and give exactly same ans as below but the below oneis more effective in terms of tc and space
  if(n==0){
    return 1;
  }
  return a*power(a,n-1);
}

int fast_power(int a, int n ){
    if(n==0){ 
        return 1;
    }
    //Rec case
    int smaller_ans = fast_power(a,n/2);
    smaller_ans *= smaller_ans;

    if(n&1){
        return smaller_ans * a;  
    }
    return smaller_ans;
}


int main()
{
 int a,n;
 cin>>a>>n;
 cout<<power(a,n)<<endl;
 cout<<fast_power(a,n)<<endl;
 return 0;
}