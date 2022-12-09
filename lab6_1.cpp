#include<iostream>
using namespace std;

int main(){
    int evencount=0;
    int oddcount=0;
    int num=1;
    while(num != 0){
    cout << "Enter an integer: ";
    cin >>num;
    if(num%2==0 && num!=0){
        evencount++;
    }
    if(num%2!=0){
        oddcount++;
    }
    }
    cout << "#Even numbers = "<<evencount<<"\n";
    cout << "#Odd numbers = "<<oddcount<<"\n";
    return 0;
}

