#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"ENter the digit : ";
    cin>>num;
    int rem, ans=0;
    while(num){
        rem=num%10;
        num/=10;
        ans=ans*10+rem;


    }
    cout<<"The final answer is : "<<ans;


    return 0;
}
