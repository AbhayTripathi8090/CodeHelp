#include<iostream>
#include<climits>
using namespace std;
void maxInArray(int arr[],int size,int index,int &maxi){
    if(index == size) return;
    maxi = max(maxi,arr[index]);
    maxInArray(arr,size,index+1,maxi);
}
int main()
{
    int arr[] = {10, 20, 80, 400, 50, 100};
    int size = 6;
    int maxi = INT_MIN;
    maxInArray(arr, size,0,maxi);
    cout << maxi<<endl;;
return 0;
}