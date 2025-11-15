/*
The Standard Template Library (STL) is a powerful set of C++ template classes that provides ready-to-use data structures and algorithms.

Main Components of STL
STL is divided into four main components:
    | Component                          | Description                | Examples                             |
    | ---------------------------------- | -------------------------- | ------------------------------------ |
    | **1. Containers**                  | Store and organize data    | `vector`, `list`, `set`, `map`, etc. |
    | **2. Algorithms**                  | Perform operations on data | `sort()`, `find()`, `count()`, etc.  |
    | **3. Iterators**                   | Traverse containers        | Like pointers (`begin()`, `end()`)   |
    | **4. Functors (Function Objects)** | Functions as objects       | Used in sorting, custom conditions   |



                                                            ┌──────────────────────────┐
                                                            │    STL CONTAINERS        │
                                                            └────────────┬─────────────┘
                                                                         │
                                            ┌────────────────────────────┼────────────────────────────┐
                                            │                            │                            │
                                            ▼                            ▼                            ▼
                                     SEQUENCE CONTAINERS        ASSOCIATIVE CONTAINERS       CONTAINER ADAPTERS
                                     (Linear data storage)     (Key-value data storage)       (Special interfaces)
                                            │                            │                            │
                                            │                            │                            │
                                     ┌──────┴───────┐          ┌─────────┴─────────┐          ┌────────┴─────────┐
                                     │              │          │                   │          │                  │
                                     ▼              ▼          ▼                   ▼          ▼                  ▼
                                    vector       deque       set               multiset     stack             queue
                                    list         array       map               multimap     priority_queue    (FIFO)
                                    forward_list             unordered_set     unordered_multiset
                                                            unordered_map     unordered_multimap



                                                            1. Containers

Containers are data structures that store data in different ways.

They are classified into three types:
🟢 A. Sequence Containers

    Store data in a linear sequence (like arrays).
    | Container        | Description                                  | Common Functions                                  | Time Complexity                             |
    | ---------------- | -------------------------------------------- | ------------------------------------------------- | ------------------------------------------- |
    | **vector**       | Dynamic array (resizable)                    | `push_back()`, `pop_back()`, `insert()`, `size()` | Access: O(1), Insert/Delete: O(n)           |
    | **deque**        | Double-ended queue (insert/delete both ends) | `push_front()`, `push_back()`, `pop_front()`      | Access: O(1), Insert/Delete: O(1) amortized |
    | **list**         | Doubly linked list                           | `push_front()`, `push_back()`, `remove()`         | Access: O(n), Insert/Delete: O(1)           |
    | **forward_list** | Singly linked list                           | `push_front()`, `remove()`                        | Access: O(n), Insert/Delete: O(1)           |
    | **array**        | Fixed-size array                             | `at()`, `size()`                                  | Access: O(1)                                |



🟣 B. Associative Containers

    Store data in key-value pairs and maintain sorted order (using balanced BST).
    | Container    | Description                                         | Common Functions                    | Time Complexity |
    | ------------ | --------------------------------------------------- | ----------------------------------- | --------------- |
    | **set**      | Stores unique elements in sorted order              | `insert()`, `find()`, `erase()`     | O(log n)        |
    | **multiset** | Same as set but allows duplicates                   | `insert()`, `erase()`               | O(log n)        |
    | **map**      | Stores key-value pairs (unique keys, sorted by key) | `insert({key, value})`, `find(key)` | O(log n)        |
    | **multimap** | Multiple values for same key                        | `insert()`, `equal_range()`         | O(log n)        |


🟣 C. Container Adapters

    Provide modified interfaces for specific uses.
    | Container          | Description                       | Functions                    | Time Complexity |
    | ------------------ | --------------------------------- | ---------------------------- | --------------- |
    | **stack**          | LIFO structure                    | `push()`, `pop()`, `top()`   | O(1)            |
    | **queue**          | FIFO structure                    | `push()`, `pop()`, `front()` | O(1)            |
    | **priority_queue** | Max-heap (highest element on top) | `push()`, `pop()`, `top()`   | O(log n)        |



*/

/*
1. Array
syntax:
#include<array>

array<data type, size> arr_name={initialize the array}; --> this is also static array thats why we didnt use frequently
operations can be performed on this array as same as basic static array like traversal, insertion deletion etc etc.


*/
/*
2. Vector (Dynamic array)
as we know this is  dynamic so no need to give size while declaration
when we try to add new element in existing vector --> all elements get copy from old vector to new vector of double of its old vector and old vector gets dump or deleted


*/

/*
3. Deque --> we can perform insertion, deletion, operations at both ends that's why its name is deque
*/


