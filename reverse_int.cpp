#include<iostream>
using namespace std;

int main(){
    int Num,revNum,temp;
    cout<<"Enter any Number :"<<endl;
    cin>>Num;
    temp = Num;
    while(temp!=0){
        int rem = temp%10;
        revNum = (revNum * 10 ) + rem;
        temp = temp/10;
    }
    cout<<"The reverse number of "<<Num<<" is "<<revNum<<endl;
    return 0;
}