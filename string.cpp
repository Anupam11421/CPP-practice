#include<iostream>
using namespace std;
int main()
{
    string s1 = "hello";
    string s2 = "world!";
    string s3 = s1 + " " + s2;
    cout<<s3<<endl;

    // FInd substring 
    string s="i want to  have apple juice";
    int idx = s.find("apple");
    cout<<idx<<endl;
    //Remove a word from the string 
    string word = "apple";
    int len  = word.length();
    cout<<s<<endl;
    s.erase(idx,len);
    cout<<s<<endl;
    //Iterate all over the character in the string 
    for(int i=0;i<s1.length();i++){
    cout<<s1[i]<<":";
    }
    cout<<endl;
    //Iterators
    for(auto it = s1.begin();it!=s1.end();it++) //auto automatcally define the datatype depending on what type of value u  have 
    cout<<(*it)<<",";
    cout<<endl;

    //for each loop
    for(char c:s1){
        cout<<c<<".";
    }
 return 0;
}