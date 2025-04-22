#include <iostream>
using namespace std;
void swap(int a,int b)
{
    // int a = 4;
    // int b = 5;
    int n = a + b;
    cout << "before swapping" << endl;
    cout << a << " " << b << endl;
    a = n - a;
    b = n - b;
    cout << "after swapping" << endl;
    cout << a << " " << b;
}
int main()
{
    swap(5,6);

    return 0;
}