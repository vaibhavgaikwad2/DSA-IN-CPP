#include <iostream>
using namespace std;

class solution {
    public:
        int main(){
            int num;
            cout<<"ENter the digit : ";
            cin>>num;
            int rem, ans=0;
            while(num){
                rem=num%10;
                num/=10;
                //ans=ans*10+rem; --> this will give integer overflow error for long numbers
                if(ans>INT16_MAX/10 || ans<INT16_MIN/10){
                    return 0;

                }
                ans=ans*10+rem;


            }
            cout<<"The final answer is : "<<ans;


            return 0;
        }
};
