#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> d;

    d.push_back(2);
    d.push_front(1);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;


    for(int i=2; i<6; i++){
        d.push_back(i);
    }
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";

    }
    cout<<endl;

    //printing any element from any index
    cout<<"element at index 3-->"<<d.at(3)<<endl;

    // checking empty or not
    cout<<"Empty or not "<<d.empty()<<endl;
    // Erase operations
    cout<<"Before erase "<<d.size()<<endl;
    //syntax of erase --> d.erase(from which element to, which element);
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;


}
