#include <iostream>
using namespace std;

int main(){

    int arr[3]; // array declaration

    int arr1[3]={1,2,3}; // Array initialisation 

    cout<<arr1<<endl;

      for(int i=0; i<3; i++){
        cout<<arr1[i]<<" ";     // Printing the whole array
    }


    int arr2[9]={1,2};
    for(int j=0; j<9; j++){
        cout<<arr2[j]<<" ";
    }
    cout<<endl;

    return 0;
}