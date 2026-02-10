/*#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n>>r;
    int fact_n=1;
    int i=1;
    while(i<=n){
        fact_n=fact_n*i;
        i++;
    }
    int fact_r=1;
    i=1;
    while(i<=r){
        fact_r=fact_r*i;
        i++;
    }
    int fact_n_r=1;
     i=1;
    while(i<=n-r){
        fact_n_r=fact_n_r*i;
        i++;
    }
    cout<<fact_n/(fact_r*fact_n_r)<<endl;
}*/


/*#include<iostream>
using namespace std;
int factorial(int n){
    int ans =1;
    int i=1;
    while(i<=n){
      ans =ans*i;
      i++;
    }
    return ans;
}
 int main(){
    int n,r;
    cin>>n>>r;
    int fact_n =factorial(n);
    int fact_r =factorial(r);
    int fact_n_r =factorial(n-r);
    int ans = fact_n/(fact_r*fact_n_r);
    cout<<ans<<endl;

 }*/



  /*  #include<iostream>
    using namespace std;
    bool isprime(int n)
    {
     int d=2;
     while(d<n){
        if(n%d==0){
         return false;
        }
        d++;
     }
     return true;
    }
    int main(){
        bool ans = isprime(31);
        cout<<ans<<endl;
        ans=isprime(85);
        cout<<ans<<endl;
    }*/


 /*#include<iostream>
 using namespace std;
 void print_1_ton(int n)
 {
  for(int i=1;i<n;i++){
    cout<<i<<endl;
  }
 }
 int main(){
    print_1_ton(10);
 }*/

/*#include<iostream>
using namespace std;
int fact(int n)
{
 int ans =1;
 for(int i=1;i<=n;i++){
    ans=ans*i;
 }
 return ans;
}
int main(){
    int a;
    cin>>a;
    int output = fact(a);
 cout<<output<<endl;
 }*/

/*#include<iostream>
using namespace std;
void increment (int a)
{
    a=a+1;
}
int main(){
    int n=10;
    increment(n);
    cout<<n<<endl;
}*/

/*#include<iostream>
using namespace std;
void func (int a)
{
 int b=10;
 a=b+10;
 cout<<a<<"  ";
}
int main(){
    int a=10;
    func(a);
    cout<<a<<"";
}*/
