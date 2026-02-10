
/*#include<iostream>
using namespace std;
int main()
{
 char name  [100];
 cout<<"enter your name"<<endl;
 cin>>name;
 name[6]='x';
 name[7]='z';
 cout<<"name:"<<name<<endl;
}
*/

/*#include<iostream>
using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
 int main(){
    char name[100];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"name:"<<name<<endl;
    cout<<"lenght:"<<length(name)<<endl;
 }*/

#include<iostream>
using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
 int main(){
    char input[100];
    cin.getline(input,100);
    cout<<input<<endl;
}
