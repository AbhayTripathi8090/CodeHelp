#include<iostream>
using namespace std;
int getlength(char arr[]){
    int i=0;
    
    while(arr[i] != '\0'){
        
        i++;
    }
    return i;
}
void reverseArr(char arr[],int size){
    int s = 0;
    int e = size - 1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main()
{
    char arr[100];
    cin>>arr;

    int size = getlength(arr);
    reverseArr(arr,size);

    cout << arr << endl;
return 0;
}



