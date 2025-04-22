#include<iostream>
using namespace std;

void firstOccurance(int arr[],int n,int target,int &ansIndex){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == target){
            ansIndex = mid;
            e = mid-1;
        }
        if(arr[mid] < target){
            s = mid+1;
        }
        if(arr[mid] > target){
            e = mid-1;
        }
    } 
}

void lastOccurance(int arr[],int n,int target,int &ansIndex){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == target){
            ansIndex = mid;
            s = mid+1;
        }
        if(arr[mid] < target){
            s = mid+1;
        }
        if(arr[mid] > target){
            e = mid-1;
        }
    } 
}


int main()
{
    int arr[] = {10,10,20,20,20,60,60,60,70,70};
    int n = 10;
    int target = 60;
    int ansIndex = -1;
    
    // firstOccurance(arr,n,target,ansIndex);
    lastOccurance(arr,n,target,ansIndex);
    // cout<<"first occurance is : "<<ansIndex<<endl;
    cout<<"last occurance is : "<<ansIndex<<endl;

return 0;
}