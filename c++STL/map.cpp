#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<stack>
#include<deque>
using namespace std;
int main()
{
  map<string,int>m;
  m["tv"] = 100;
  m["bulb"] = 300;
  m["remote"] = 500;
  m["box"] = 600;
//   m.erase("tv");

  m.emplace("camera",200);

  for(auto p:m){
    cout<<p.first<<" "<<p.second<<endl;
  }
//   cout<<"count = "<<m.count("box")<<endl;
//   cout<<"count = "<<m["box"]<<endl;

if(m.find("camera") != m.end()){
    cout<<"found\n";
}else{
    cout<<"Not found\n";
}
  return 0;
}