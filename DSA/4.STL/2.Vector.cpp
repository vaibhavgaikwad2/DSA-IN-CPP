#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v; // declaration of vector
    cout<<"Size -->"<<v.capacity()<<endl;

    v.push_back(1); // this will add element at the back of array
    cout<<"Size -->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size -->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size -->"<<v.capacity()<<endl;




    cout<<"Actual Size -->"<<v.size()<<endl;
    cout<<"Before POP"<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    v.pop_back(); //--> remove element from back of the array

    cout<<"After POP Operation"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    cout<<"Alternative for above for loop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //capacity tells how much elements can store and size tells how many elements he has

    // we can also perform same operations like array


    //Another way to intialize the vector --> vector<int> name(size,number by which every element will initialize);
    vector <int> a(5,7);
    cout<<"Printing the vector a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
}
