//merge two sorted array
#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArray(int arr[],int sizeArr,int brr[],int sizeBrr,vector<int>&ans){
    int i=0,j=0;
    while(i<sizeArr && j<sizeBrr){
        if(arr[i]<=brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }
    while (i<sizeArr)
    {
        ans.push_back(arr[i]);
        i++;
    }
    while (j<sizeBrr)
    {
        ans.push_back(brr[j]);
        j++;
    }

} 
int main(){
    int arr[]={10,30,40,60};
    int brr[]={20,50,70,80,100,120};
    int sizeArr = 4;
    int sizeBrr = 6;
    vector<int>ans;
    mergeSortedArray(arr,sizeArr,brr,sizeBrr,ans);
    for(auto i:ans) cout<<i<<" ";
    return 0;
}
