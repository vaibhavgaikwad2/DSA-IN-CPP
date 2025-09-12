#include <iostream>
using namespace std;

int main(){

    int row,col;
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(row=1; row<=n; row++){

        //space 
        for(col=1; col<=n-row; col++){
            cout<<"  ";
        }
        
        //numbers
        for(col=1; col<=row; col++){
            cout<<row<<" ";
        }
        



        cout<<endl;
    }



    return 0;
}