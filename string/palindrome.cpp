#include<iostream>
using namespace std;

int getLength(char arr[],int size){
    int count=0;
    int index = 0;
    while(arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}

bool checkPalidrome(char arr[],int size){
    int len = getLength(arr,size);
    int s=0;
    int e=len-1;
    while(s<=e){
        if(arr[s] == arr[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
char arr[1000];
int size = 1000;
cin>>arr;

int len = getLength(arr,size);
cout<<len<<endl;
cout<<checkPalidrome(arr,1000)<<endl;
return 0;
}