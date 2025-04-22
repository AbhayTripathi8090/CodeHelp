#include<iostream>
using namespace std;
int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n=5,val=4;
    int arr[5]={1,2,3,4,5};
    linearSearch(arr,n,val);
return 0;
}