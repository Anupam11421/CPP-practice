// #include<iostream>
// using namespace std;
// int main()
// {
//  int p,r,t, si;
//  p=100;
//  r=12;
//  t=2;
//  si=p*r*t/100;
//  cout<<si<<endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//  int p,r,t;
//  float si;
//  cin>>p>>r>>t;
//  si=p*r*t/100.0;
//  cout<<si<<endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//  int x = 4993;
//  float y = 1.4231;
//  double pi=3.144142135652;
//  char  ch = 'A';
//  bool whether_is_rainy = true;
//  cout<<"int"<<sizeof(x)<<endl;//4bytes
//  cout<<"float"<<sizeof(y)<<endl;//4 bytes
//  cout<<"double"<<sizeof(pi)<<endl;//8bytes
//  cout<<"char"<<sizeof(ch)<<endl;//1bytes
//  cout<<"bool"<<sizeof(whether_is_rainy)<<endl;//1bytes
//  return 0;

// #include<iostream>
// using namespace std;
// int main()
// {
// int f=0;
// int c;
// while(f<300){
//    c=(5*(f-32))/9;
//    cout<<f<<" "<<c<<endl;
//    f=f+20;
// }
//  return 0;
// }

// if else and else if


// #include <iostream>
// using namespace std;
// int main()
// {
    // int n;
    // cin >> n;
    // if (n%2==0 and n%3==0)
    // {
        // cout << "n is divisible by 2 and 3" << endl;
        // cout << "if block" << endl;
    // }
    // else if(n%2==0){
        // cout << "n is divisible by 2" << endl;
        // cout << "if block" << endl;
    // }
    // else if(n % 3 == 0)
    // {
        // cout << "n is divisible by 3" << endl;
        // cout << "if block" << endl;
    // }
    // else
    // {
        // cout << "n is not divisible" << endl;
        // cout << "else block" << endl;
    // }
// }

//while loop!

// #include<iostream>
// using namespace std;
// int main()
// {
//  int cliff_end =10;
//  int x=0;
//  while(x<cliff_end){
    // x = x+1;
    // cout<<"taking 1 step reaching:"<<x<<endl;
//  }
//  cout<<" Final x "<< x << endl; 
// 
//  if(x=cliff_end){
    // cout<<"We are standing at cliff edge"<<endl;
//  }
//  else if(x>cliff_end){
    // cout<<"Falling from the cliff"<<endl;
//  }
//  return 0;
// }

//do while!

// #include<iostream>
// using namespace std;
// int main()
// {
//  int cliff_end =10;
//  int x=0;
//  do{
    // x = x+1;
    // cout<<"taking 1 step reaching:"<<x<<endl;
//  }
//  while(x<cliff_end);
//  cout<<" Final x "<< x << endl;
//  
// 
//  if(x=cliff_end){
    // cout<<"We are standing at cliff edge"<<endl;
//  }
//  else if(x>cliff_end){
    // cout<<"Falling from the cliff"<<endl;
//  }
//  return 0;
// }

// for loop 

// #include<iostream>
// using namespace std;
// int main()
// {
    //  int cliff_end = 10;
    //  int x;
    //  for(x=0;x<cliff_end;x=x+1){
        // cout<<"Taking 1 step reaching:"<<endl;
    //  }
//  return 0;
// }





// introduction to STL IN C++
// #include<iostream>
// using namespace std;
// linearsearch 
// template<typename T>
// int search(T arr[],int n,T key){
//     for(int p=0;p<n;p++){
//         if(arr[p]==key){
//             return p;
//         }
//     }
// }
// int main()
// {
//     int a[]={1,2,3,4,5,10,12};
//     int n=sizeof(a)/sizeof(int);
//     int key = 10;
//     cout<<search(a,n,key)<<endl;
//     float b[]={1.1,1.2,1.3};
//     float k=1.2;
//     cout<<search(b,3,k)<<endl;
// return 0;
// }



/*#include<iostream>
#include<list>
using namespace std;
// linearsearch 
template<typename T>
int search(T arr[],int n,T key){
    for(int p=0;p<n;p++){
        if(arr[p]==key){
            return p;
        }
    }
}

//if you want to make generic function  should use tmeplate
//with template you get freedom from datatypes
//from iterator u get freedom from all type of container
template<class forwarditerator,class T>  
forwarditerator search(forwarditerator start,forwarditerator end,T key){
while(start!=end){
        if(*start==key){
            return start;
        }
        start++;
}
 return end;
}

int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    auto it = search(l.begin(),l.end(),5);
    if(it==l.end()){
        cout<<"element not present";
    }
    else{
        cout<<*it<<endl;
    }
}*/



/*#include<iostream>
#include<list>
#include<string>
#include<vector>
using namespace std;
// linearsearch 
template<typename T>
int search(T arr[],int n,T key){
    for(int p=0;p<n;p++){
        if(arr[p]==key){
            return p;
        }
    }
}
template<class forwarditerator,class T>  
forwarditerator search(forwarditerator start,forwarditerator end,T key){
while(start!=end){
        if(*start==key){
            return start;
        }
        start++;
}
 return end;
}

template<class forwarditerator,class T,class compare>  
forwarditerator search(forwarditerator start,forwarditerator end,T key,compare cmp){
while(start!=end){
        if(cmp(*start==key)){
            return start;
        }
        start++;
}
 return end;
}


class Book{
    public:
    string name;
    int price;

Book(){

}

Book(string name, int price){
    this->name = name;
    this->price = price;
}
};

class Bookcompare{ 

    public:
    bool operator()(Book A,Book B){
        if(A.name==B.name){
            return true;
        }
        return false;
    }
};

int main(){
    Book b1("c++",100);
    Book b2("python",120);
    Book b3("java",130);

    vector<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book booktofind("c",100);
    Bookcompare cmp;
   
    auto it = search(l.begin(),l.end(),booktofind,cmp);
    if(it != l.end()){
        cout<<"Book find in the library!";
    }
    else{
        cout<<"not found";
    }
}*/


#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

// Linear Search for arrays
template <typename T>
int searchArray(T arr[], int n, T key) {
    for (int p = 0; p < n; p++) {
        if (arr[p] == key) {
            return p;
        }
    }
    return -1; // Return -1 if the key is not found
}

// Linear Search for iterators
template <class ForwardIterator, class T>
ForwardIterator searchIterator(ForwardIterator start, ForwardIterator end, T key) {
    while (start != end) {
        if (*start == key) {
            return start;
        }
        start++;
    }
    return end;
}

// Linear Search with a custom comparator
template <class ForwardIterator, class T, class Compare>
ForwardIterator searchWithComparator(ForwardIterator start, ForwardIterator end, T key, Compare cmp) {
    while (start != end) {
        if (cmp(*start, key)) {
            return start;
        }
        start++;
    }
    return end;
}

class Book {
public:
    string name;
    int price;

    Book() : name(""), price(0) {} // Initialize members

    Book(string name, int price) : name(name), price(price) {}
};

class BookCompare {
public:
    bool operator()(Book A, Book B) {
        return A.name == B.name; // Simplified comparison
    }
};

int main() {
    Book b1("c++", 100);
    Book b2("python", 120);
    Book b3("java", 130);

    vector<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book bookToFind("c++", 100);
    BookCompare cmp;

    auto it = searchWithComparator(l.begin(), l.end(), bookToFind, cmp);
    if (it != l.end()) {
        cout << "Book found in the library!";
    } else {
        cout << "Book not found";
    }
}














