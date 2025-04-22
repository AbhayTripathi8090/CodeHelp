#include<iostream>
#include<vector>
using namespace std;
int nearlySorted(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid-1] == target){
            return mid-1;
        }
        if(arr[mid+1] == target){
            return mid+1;
        }
        if(arr[mid] < target){
            //right
            s = mid+1;
        }
        else{
            //left
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main()
{
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int size = 7;
    int target = 700;
    int ans = nearlySorted(arr,size,target);
    cout<<"found index at : "<<ans<<endl;
    return 0;
}