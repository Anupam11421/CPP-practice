#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<stack>
using namespace std;
int main()
{
    // pair<int,int> p = {1,5};
    // pair<int,pair<char,int>> p = {2,{'a',8}};
    // cout<<p.first<<endl; //2
    // cout<<p.second.first<<endl;//a
    // cout<<p.second.second<<endl;//8
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // cout<< "top ="<<s.top()<<endl;

    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }

    // cout<<endl;

    stack<int> s2;
    s2.swap(s);

    cout<<"s size "<<s.size()<<endl;
    cout<<"s2 size "<<s2.size()<<endl;
    return 0;
} 