// #include<iostream>
// #include<vector>
// void merge(int arr[],int s,int e,int mid){
//     int leftLenght = mid-s+1;
//     int rightLenght = e-mid;

//     int *leftArr = new int[leftLenght];
//     int *rightArr = new int[rightLenght];

//     int index = s;
//     for(int i=0;i<leftLenght;i++){
//         leftArr[i] = arr[index];
//         index++;
//     }
//     index= mid+1;
//     for(int i=0;i<rightLenght;i++){
//         rightArr[i] = arr[index];
//         index++;
//     }

//     //merge logic
//     int i=0,j=0,mainArrIndex = s;
//     while(i<leftLenght and j<rightLenght){
//         if(leftArr[i]<rightArr[j]){
//             arr[mainArrIndex] = leftArr[i];
//             i++;
//             mainArrIndex++;
//         }
//         else{
//             arr[mainArrIndex] = rightArr[j];
//             j++;
//             mainArrIndex++;
//         }
//     }

//     while(i<leftLenght){
//         arr[mainArrIndex] = leftArr[i];
//         i++;
//         mainArrIndex++;
//     }

//     while(j<rightLenght){
//         arr[mainArrIndex] = rightArr[j];
//         j++;
//         mainArrIndex++;
//     }
//     //delete heao memory
//     delete[] leftArr;
//     delete[] rightArr;
// }
// void mergeSort(int arr[],int s,int e){
//     //base case
//     if(s>=e) return;
//     int mid = (e+s)/2;
//     //left part
//     mergeSort(arr,s,mid);
//     //right part
//     mergeSort(arr,mid+1,e);
//     //both part merged
//     merge(arr,s,e,mid);
// }
// using namespace std;
// int main(){
//     int arr[] = {10,80,60,50,40,20,30,70};
//     int size = 8;
//     int s = 0;
//     int e = size-1;
//     int mid = (e-s)/2;
//     cout<<"Before : "<<endl;
//     for(int a:arr){
//         cout<<a<<" ";
//     }
//     cout<<endl;
//     mergeSort(arr,s,e);
//     cout<<"After : "<<endl;
//     for(int a:arr){
//         cout<<a<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid, int &count) {
    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    int index = s;
    for (int i = 0; i < leftLength; i++) {
        leftArr[i] = arr[index++];
    }
    index = mid + 1;
    for (int i = 0; i < rightLength; i++) {
        rightArr[i] = arr[index++];
    }

    // Merge logic
    int i = 0, j = 0, mainArrIndex = s;
    while (i < leftLength && j < rightLength) {
        if (leftArr[i] <= rightArr[j]) {
            arr[mainArrIndex++] = leftArr[i++];
        } else {
            arr[mainArrIndex++] = rightArr[j++];
            count += (leftLength - i); // Count inversions
        }
    }

    while (i < leftLength) {
        arr[mainArrIndex++] = leftArr[i++];
    }
    while (j < rightLength) {
        arr[mainArrIndex++] = rightArr[j++];
    }

    // Free allocated memory
    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[], int s, int e, int &count) {
    if (s >= e) return;
    int mid = s + (e - s) / 2;

    // Sort left and right halves
    mergeSort(arr, s, mid, count);
    mergeSort(arr, mid + 1, e, count);

    // Merge both halves and count inversions
    merge(arr, s, e, mid, count);
}

int main() {
    int arr[] = {10, 80, 60, 50, 40, 20, 30, 70};
    int size = 8;
    int count = 0;

    

    mergeSort(arr, 0, size - 1, count);

   

    cout << "Number of inversions: " << count << endl;

    return 0;
}
