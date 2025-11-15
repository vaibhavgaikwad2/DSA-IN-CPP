#include <iostream>
#include <map>

using namespace std;

int main(){

/*
A map is an ordered key–value store.

Meaning:

Every element is stored as a pair (key, value)

Keys are always unique

Elements are stored in sorted order of keys

Under the hood → Red-Black Tree (self-balancing BST)

syntax : map<int, string> mp;

This means:

key → int

value → string

Example pair stored internally: (10, "Vaibhav")


map is implemented using a Red-Black Tree.

This directly gives it:

O(log n) insert

O(log n) search

O(log n) delete

Sorted keys

In-order traversal

This is NOT a hash table (that’s unordered_map).
This is NOT an array.
This is NOT a heap.

It’s a strictly sorted, balanced BST.


#Important Functions You MUST Know
 mp[key] = value;

Insert or update value.

Important:
If key doesn't exist, it gets created automatically with default value.

 mp.at(key)

Safer version — throws error if key doesn’t exist.

 mp.insert({key, value})

Insert without overwriting existing key.

 mp.find(key)

Returns iterator to that key.
If not found → mp.end().

 mp.erase(key)

Deletes that entry.

 mp.count(key)

Returns 0 or 1 (because keys are unique).

 mp.size()

Number of elements.

 begin() / end()

To traverse in sorted order.
*/


map<int, string> mp;
mp[1]="Banana";
mp[3]="apple";
mp[2]="mango";

for(auto p : mp){
    cout<<p.first<<" -> "<<p.second<<endl;
}

/*Time complexity

| Operation     | Time     |
| ------------- | -------- |
| insert        | O(log n) |
| erase         | O(log n) |
| find          | O(log n) |
| access via [] | O(log n) |
| traversal     | O(n)     |

*/

}
