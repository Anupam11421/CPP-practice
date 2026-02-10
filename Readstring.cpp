#include<iostream>
using namespace std;
int main()
{
  char a[100][1000];
  //Read a list of string and we will store them in 2d character 

  int n;
  cin>>n;

  cin.get();
  for(int i = 0;i<n;i++){
        cin.getline(a[i],1000);
  }
  //Print out all the string

  for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
  }
 return 0;
}