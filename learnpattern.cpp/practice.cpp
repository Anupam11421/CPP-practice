/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<'*';
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}*/




/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int j =1;
        while(j<n-i+1){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/



/*#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<++a<<endl;
    cout<<a++<<endl;
}*/


/*#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<--a<<endl;
    cout<<a--<<endl;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int i;
   for(i=0;i<5;i=i+1){
    cout<<i<<endl;
    i=i+1;
   }

}*/




/*#include<iostream>
using namespace std;
int main(){
    char c ;
    cin>>c;
    int count =0;
    while(c!='$'){
    count ++;
    cin>>c;
    }
    cout<<count<<endl;

}*/

 /*#include<iostream>
using namespace std;
int main(){
    char c ;
    c=cin.get();
    int count =0;
    while(c!='$'){
    count ++;
    c=cin.get();
    }
    cout<<count<<endl;

}*/



#include<iostream>
using namespace std;
int main(){
    int x = 100;
    while(x>=10){
        x=x-1;
        cout<<x;
        x--;
    }
}