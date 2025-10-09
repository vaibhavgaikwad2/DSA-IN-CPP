#include <iostream>
using namespace std;

void printArr(int arr[], int size){

    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int arr1[3]={1,2,3};

    printArr(arr1,3);

    int arr2[6]={0};
    printArr(arr2,6);

return 0;
}
