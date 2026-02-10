#include<iostream>
using namespace std;

// Number  to spelling 
// 2048 == two zero four eight  we do this recursively

char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void printSpellings(int n){

    //Base case
    if(n==0){
        return;
    }

    //Recursive Case first print the spelling of (204)
    printSpellings(n/10);  // if you want the numbr output to be in reverss than  1st line int digit 2nd line is cout wla and third one is print wal 
    int digit = n%10;
    cout<<words[digit]<<" ";

    return;

}

int main()
{
    int n;
    cin>>n;
    printSpellings(n);
}