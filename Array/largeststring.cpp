#include<iostream>
#include<cstring>
using namespace std;
// Read N , followed by N strings and print the largest string
// apple, mango, banana, pineapple  

int main() // we will not store the all strings just two string largest and current
{
    int n;
    cin>>n;
    
    char a[1000];
    char largest[1000];

    int len =0;
    int largest_len =0;
    cin.get(); // to consume the newline character after n

    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        // cout<<a<<endl;
        len = strlen(a);
        if(len>largest_len){
            largest_len = len;
            strcpy(largest,a); // copy the current string to largest string
        }   
    }
    cout<<largest<<" and "<<largest_len<<endl;
 return 0;
}