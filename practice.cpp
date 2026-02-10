/* #include<iostream>
using namespace std;
int main()
{
 int i=10;
 int *p=&i;
 cout<<sizeof(p)<<endl;
 cout<<i<<endl;
 cout<<*p<<endl;
 i++;
 cout<<i<<endl;
 cout<<*p<<endl;
 (*p)++;
 cout<<i<<endl;
 cout<<*p<<endl;
} */

/*#include<iostream>
using namespace std;
int main()
{
 float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << " " << f << " " << p<<endl;
}*/

#include<iostream>
using namespace std;
int main()
{
 double a = 10.54;
double *d = &a;
d = d + 1;
cout  << d << endl;
}