#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number" << endl;
    cin >> num;
    // for(int row=0;row<num;row++){
    //     for(int col=0;col<num;col++){
    //         if(row==0 || row==num-1 || col==0 || col==num-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    for(int row=0;row<num;row++){
        for(int col=0;col<num;col++){
            if(row==0 || row==num-1 || col==0 || col==num-1 || row==col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    // for (int row = 0; row < num; row++)
    // {
    //     for (int col = 0; col < num; col++)
    //     {
    //         if (row == 0 || row == num - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             if (col == 0 || col == num - 1)
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }
    return 0;
}