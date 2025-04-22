#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << j+1;
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << j+1;
        }
        cout<<endl;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         if(i==0||i==n-1||j==0||i+j==n-1)
    //         cout << "* ";
    //         else
    //         cout << "  ";
    //     }
    //     cout<<endl;
    // }


    // for (int i = 0; i < n; i++)
    // {
    //     int totalcol = i + 1;
    //     for (int j = 0; j < totalcol; j++)
    //     {
    //         if (i == 0 || i == 1 || i == n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             if (j == 0 || j == totalcol - 1)
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