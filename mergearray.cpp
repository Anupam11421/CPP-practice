/*#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and merge them into mergedArr
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // If there are remaining elements in arr1, add them to mergedArr
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }

    // If there are remaining elements in arr2, add them to mergedArr
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size1, size2;
    cout << "Enter size of first sorted array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second sorted array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    cout << "Merged sorted array: ";
    printArray(mergedArr, mergedSize);

    return 0;
}*/


/*#include<iostream>
using namespace std;
void mergeArrays(int arr1[],int size1,int arr2[],int size2,int mergedArr[]){
 int i=0,j=0,k=0;
 while(i<size1&&j<size2){
    if(arr1[i]<arr2[j]){
        mergedArr[k++]=arr1[i++];
    }else{
        mergedArr[k++]=arr2[j++];
    }
 }
 while(i<size1){
    mergedArr[k++]=arr1[i++];
 }
 while(j<size2){
    mergedArr[k++]=arr2[j++];
 }
 void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
 int main(){
    int size1=3;
    int arr1[]={1,3,5};
    int size2=3;
    int arr2[]={2,4,6};
    int mergedsize =size1+size2;
    in mergedArr[merged size];
    mwrgeArray(arr1,size1,arr2,size2,mergedArr);
    cout<<"Merged sorted array:";
    printArray(mergedArr,mergedsize);
    return 0;
 }
}*/

#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size1 = 3;
    int arr1[] = {1, 3, 5};
    int size2 = 3;
    int arr2[] = {2, 4, 6};
    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];
    
    mergeArrays(arr1, size1, arr2, size2, mergedArr);
    
    cout << "Merged sorted array: ";
    printArray(mergedArr, mergedSize);
    
    return 0;
}
