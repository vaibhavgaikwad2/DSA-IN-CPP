#include<iostream>
#include<set>

using namespace std;

int main(){
/*
A set is an ordered container that:

Stores only unique values

Automatically keeps them sorted

Uses a balanced binary search tree internally (Red-Black Tree)

So the moment you insert something:

Duplicates are rejected

Order is maintained

Operations stay fast

This is not magic — it’s the Red-Black Tree doing the heavy lifting.

1. Properties of set

 Unique elements
 Sorted in ascending order by default
 Internally implemented as RB-tree (self-balancing BST)
 Every operation: O(log n)


2. Syntax
    set<int> s;


3. Important Functions (You MUST know these)
 insert(x)

    Inserts element only if not present.

 erase(x)

    Deletes the value x.

 find(x)

    Returns iterator → points to x if present, else s.end().

 count(x)

    Returns 1 or 0 (because set doesn’t allow duplicates).

 size()

    Number of elements.

 begin() / end()

    Iterators for traversal.

 lower_bound(x)

    First element ≥ x.

 upper_bound(x)

    First element > x


4.Use set when you need:

Unique elements

Automatically sorted order

Fast search (log n)


*/


set<int> s;

s.insert(30);
s.insert(20);
s.insert(40);

for(int i:s){
    cout<<i<<" ";
}

cout<<endl;

set<int> a = {10, 40, 20};

set<int>::iterator it = a.begin();

cout << *it;   // prints 10 (smallest element)


}
