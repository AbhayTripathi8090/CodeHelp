#include<iostream>
#include<climits>
using namespace std;
void minInArray(int arr[],int size,int index,int &mini){
    if(index == size) return;
    mini = min(mini,arr[index]);
    minInArray(arr,size,index+1,mini);
}
int main()
{
    int arr[] = {10, 2, 80, 400, 50, 100};
    int size = 6;
    int mini = INT_MAX;
    minInArray(arr, size,0,mini);
    cout << mini<<endl;;
return 0;
}