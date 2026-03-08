#include<iostream>
#include<list>
using namespace std;
//Linearsearch
template<typename T>
int search(T arr[],int n,T key){
    for(int p=0;p<n;p++){
        if(arr[p]==key){
            return p;   
        }
    }
    return n;
}
template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end, T key){  //So it work on diferent container,vector,list

    while(start!=end){
        if(*start==key){
            return start;
        }
        start++;
    }
    return end;
}

int main()
{
   /* int a[]={1,2,3,4,10,12};
    int n = sizeof(a)/sizeof(int);
    int key = 10;
    // cout<<search(a,n,key)<<endl;
    float k = 1.2;
    float b[] = {1.1,1.2,1.3};
    cout<<search(b,3,k)<<endl;
    */
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(3);

    auto it = search(l.begin(),l.end(),50);
    if(it==l.end()){
        cout<<"element not present";
    }
    else{
        cout<<*it<<endl;
     }
 return 0;
}