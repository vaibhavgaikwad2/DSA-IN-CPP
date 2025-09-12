#include <iostream>
using namespace std;

int main(){

    int num;
    int rem,ans=0;
    cin>>num;

    while(num!=0){

        rem=num%10;
        num/=10;
        ans=ans+rem;
    }
    cout<<"The answer is: "<<ans;





    return 0;
}
