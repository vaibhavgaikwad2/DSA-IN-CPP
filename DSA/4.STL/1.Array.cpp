#include <iostream>
#include <array> // this is stl library that is used to create array

using namespace std;

int main(){

array<int,5> a={1,2,3,4,5};

int size=a.size();

for(int i=0; i <size; i++){
    cout<<a[i]<<endl;
}

cout<<"Element at 2nd index-->"<<a.at(2)<<endl;
cout<<"Empty(1) or not(0)-->"<<a.empty()<<endl;

cout<<"First Element-->"<<a.front()<<endl;
cout<<"Last Element-->"<<a.back()<<endl;

}
