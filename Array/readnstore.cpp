// how to read a sentence/paragraph and store in char array 
//cin.get() reads a single character
// put a loop to read characters till you ge a new line '\n'
#include<iostream>
using namespace std;

void readline (char a[], int maxLen, char delim ='\n'){
    int i = 0;
    char ch = cin.get(); // read the first character
    while(ch != delim ){
        a[i]= ch;
        i++;
        if ((i==maxLen-1)){
            break;
        }
        ch =cin.get();
    }
    // once out of loop 
    a[i]=0;
    return;
}
  
int main()
{
 char a[1000];
 //  readline(a,1000,'$'); // here you can ask to stop after the special character like  $here we write $ after 1000 then it stop when it see $
 cin.getline(a,1000,'$')
 cout<<a<<endl;
 return 0;
}