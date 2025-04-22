#include<iostream>
#include<cmath>
using namespace std;

// int decimalTobinary(int num){
//     int binaryNum = 0;
//     int i=1;
//     while (num>0)
//     {
//         int bit=num%2;
//         binaryNum = (bit*(i))+binaryNum;
//         num=num/2;
//         i*=10;
//     }
//     return binaryNum;
// }

int decimalTobinary(int num){
    int binaryNum = 0;
    int i=1;
    while (num>0)
    {
        int bit=num&1;
        binaryNum = (bit*(i))+binaryNum;
        num=num>>1;
        i*=10;
    }
    return binaryNum;
}
int main()
{
    int num;
    cin>>num;
    int ans= decimalTobinary(num);
    cout<<ans<<endl;

return 0;
}