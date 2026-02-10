#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec = {1,2,3,4,5};
    // vec.erase(vec.begin()); // this remove begining 1 from the vector then you get 2 3 4 5
    // vec.erase(vec.begin()+2); // this remove 4 from 2 3 4 5 because you run this after vec.begin()

    // We can also delete a range of numberr using vector.erase using this vec.erase(start,end)

    // vec.erase( vec.begin() + 1,vec.begin() + 3);

    vec.insert(vec.begin()+3,102);

    // vec.clear();
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Capacity:"<<vec.capacity()<<endl;

    cout<<"vec.begin() :"<<*(vec.begin())<<endl;
    cout<<"vec.end() :"<<*(vec.end())<<endl;
    
//  vector<int>vec(10 ,-1);
//  vec.push_back(2);
//  vec.push_back(4);
//  vec.push_back(6);
//  vec.push_back(8);
//  vec.push_back(9);
//  vec.pop_back();
//  cout<<vec.size()<<endl;
//  cout<<vec.capacity()<<endl;
for(int val : vec){ 
    cout<<val<<" ";
}
    cout<<endl;
    // cout<<" front "<< vec.front() << endl;
    // cout<<" back "<< vec.back() << endl;
    // cout<<" val at idx 2 "<< vec[2] <<" or "<< vec.at(2) <<endl;
    return 0;
}
