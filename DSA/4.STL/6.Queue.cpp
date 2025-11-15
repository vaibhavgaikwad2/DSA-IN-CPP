#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"Size of the Queue is : "<<q.size()<<endl;
    cout<<"Front element of Queue : "<<q.front()<<endl;
    q.pop();
    cout<<"Size after POP : "<<q.size()<<endl;




}
