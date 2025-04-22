#include<iostream>
using namespace std;
int main()
{
// for(int row=0;row<3;row++){
//     for(int col=0;col<5;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

int l,b;
cout<<"Enter the length and breadth of the rectangle"<<endl;
cin>>l>>b;
for(int row=0;row<l;row++){
    for(int col=0;col<b;col++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}