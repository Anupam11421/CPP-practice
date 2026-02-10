/*#include<iostream>
using namespace std;
int main()
//take input as array from the user
{
 int n;
 cin>>n;
 int input[100];
 for(int i=0;i<n;i++){
    cin>>input[i];
 }
 //Print array
 for(int i=0;i<n;i++){
    cout<<input[i]<<endl;
 }
}*/


// Linear Search in C++

#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int array[] = {5,7,3,6,8,9};
  int x = 7;
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}          