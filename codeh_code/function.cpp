#include <iostream>
using namespace std;

void printCounting(){
    for(int i=1;i<101;i++){
        cout<<i<<" ";
    }
}

// void printSimpleInterest(int p,int r,int t){
//     int si=(p*r*t)/100;
//     cout<<si;
// }
void eligibilityTest(int age){
    if(age>=18){
        cout<<"Eligible to vote";
    }
    else{
        cout<<"Not eligible to vote";
    }
}
// void sipCalculator(int i,int n,int po){
//     // int FV = p [( (1+i)**n)-1 ] * (1+i)/i ;
//     int FV = po(pow(1+i,n)) * (1+i)/i ;
    
//     cout<<FV;
// }


int main(){
    printCounting();
    cout<<endl;
    // printSimpleInterest(2000,10,2);
    cout<<endl;
    eligibilityTest(19);

    
    return 0;
}