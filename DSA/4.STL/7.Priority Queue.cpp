#include<iostream>
#include<queue>

using namespace std;

int main(){

    /*A priority queue is a data structure
    where the element with the highest priority is always at the front.

    Syntax  :
                priority_queue<int> pq;   // max-heap

                max-heap-->A heap is a complete binary tree with a special ordering rule.
                Parent ≥ children
                → Biggest element sits at the top (root).



    */


    //Max heap Priority Queue
    priority_queue<int> pq;

    //operations
    pq.push(10);
    pq.push(29);
    pq.push(30);
    pq.push(9);
    pq.push(13);

    cout<<pq.top()<<endl;
/*
    pq.pop(); // removes top element
    pq.empty(); // returns true if pq is empty
    cout<<pq.size()<<endl;
*/
    //Min-Heap Priority Queue
    /*
    Now smallest element is at the top.
    syntax: priority_queue<int, vector<int>, greater<int>> minpq;

    */

    // Time Complexity
        /*
| Operation | Time     |
| --------- | -------- |
| push()    | O(log n) |
| pop()     | O(log n) |
| top()     | O(1)     |
| empty()   | O(1)     |

        */

    for(int i=0; i<pq.size(); i++){

        cout<<pq.top()<<endl;
        pq.pop();
    }
}

