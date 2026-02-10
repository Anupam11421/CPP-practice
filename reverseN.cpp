/*#include <iostream>

using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    // Swap elements from the start and end of the array
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
} */


/*#include<iostream>
using namespace std;
int main()
{
 char s[]="hello";
 char *p = s;
 cout<<s[0]<<"  "<<p[0];
}*/

/*#include<iostream>
using namespace std;
int main()
{
  char ch = 'a';
 char* ptr = &ch;
 ch++;
 cout << *ptr << endl;
}*/

/*#include<iostream>
using namespace std;
int main()
{
 char b[] = "xyz";
char *c = &b[0];
cout << c << endl;
}*/



/*#include<iostream>
using namespace std;
int main()
{
 int a = 100;
 int *p = &a;
 int **q = &p;
 int b = (**q)++ + 4;
 cout << a << " " << b << endl;
}*/



/*#include<iostream>
using namespace std;
int main()
{
 int i = 65;
 char c = i;
 cout<<c<<endl;
 int *p = &i;
 char * pc = (char*)p;
 cout<<*p<<endl;
 cout<<*pc<<endl;
 cout<<p<<endl;
 cout<<pc<<endl;
 cout<<(p+1)<<endl;
 cout<<(p+2)<<endl;
 cout<<(p+3)<<endl;
}*/


#include <iostream>
using namespace std;

void updateValue(int *p){
    *p = 610 % 255;
}

int main(){
    char ch = 'A';
    updateValue((int*)&ch);
    cout << ch;
}