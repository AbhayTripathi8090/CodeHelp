#include<iostream>
using namespace std;
int main()
{
// for(int i=1;i<=4;i++){
//     for(int j=1;j<=4;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

int side;
cout<<"Enter the side of the square"<<endl;
cin>>side;
for(int i=1;i<=side;i++){
    for(int j=1;j<=side;j++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}