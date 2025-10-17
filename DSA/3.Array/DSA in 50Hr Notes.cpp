/*
linear data structures --> A linear data structure is a type of data structure in which elements are arranged in a sequential order, and each element is connected to its previous and next element.
ex.
    1) array
    2) Linked List
    3) Stack
    4) Queue
    5) Deque

#Advantages:

    Easy to implement and use.

    Traversal is straightforward (sequential access).

    Suitable for problems requiring ordered data processing.

#Disadvantages:

    Inefficient for frequent insertion/deletion (especially arrays).

    Memory utilization may not be optimal.

    Searching can be slow in unsorted linear structures (O(n) time).

    no linear data structures --> A non-linear data structure is a type of data structure in which elements are not arranged sequentially.
    Instead, they are organized in a hierarchical or interconnected manner, where one element can be connected to multiple other elements.

Examples of Non-Linear Data Structures:

    Tree – A hierarchical structure with a root node and child nodes (e.g., Binary Tree, Binary Search Tree).

    Graph – A set of nodes (vertices) connected by edges, used to represent networks like social media or road maps.

    Heap – A special type of tree used for implementing priority queues.

    Trie – A tree-like structure used for storing strings efficiently (used in autocomplete, dictionaries).

#Advantages:

    Efficient representation of hierarchical or networked data.

    Faster searching and insertion in some structures (like binary search trees, heaps).

    Suitable for complex relationships and data modeling.

#Disadvantages:

    More complex to implement and manage.

    Traversal algorithms are not straightforward (require recursion or BFS/DFS).

    Memory usage may be higher due to pointers and links between nodes.

Hash-Based Data Structures

Definition:
    A hash-based data structure is a type of data structure that uses a hash function to map keys to specific locations
    (called buckets or slots) in memory where the corresponding values are stored.
    This mapping allows for fast data access, typically in O(1) average time for insertion, deletion, and lookup operations.


Common Hash-Based Data Structures
    Data Structure	Description
    Hash Table	Stores key-value pairs using a hash function. Provides O(1) average time complexity for most operations.
    Hash Map	Similar to a hash table, but often implemented with dynamic resizing and thread safety in modern languages (like Python’s dict, Java’s HashMap).
    Hash Set	Stores only unique values, implemented internally using a hash table (e.g., Python’s set, Java’s HashSet).
    Hash Trie / Hash Tree	A combination of hashing and tree structures for efficient data retrieval and memory optimization (used in modern databases).

Advantages

     Fast access time (O(1) average case for search, insert, delete)
     Efficient for large datasets where quick lookups are needed
     Flexible key types – can store strings, numbers, or objects as keys

Disadvantages

     Collisions can degrade performance to O(n) in the worst case
     Memory overhead due to unused or sparsely filled buckets
     Ordering not preserved (unlike lists or trees)
     Hash function quality affects performance greatly

Applications of Hash-Based Data Structures

    Implementing symbol tables in compilers

    Database indexing

    Caching systems (e.g., LRU cache using hash maps)

    Password storage (with cryptographic hashing)

    Search engines (for keyword lookups)



-------------------------**ARRAY**----------------------------------------------------
Definition

    An array is a linear data structure that stores a collection of elements of the same data type in contiguous memory locations.
    Each element is identified by an index, starting from 0 in most programming languages.
ex:
    int marks[5] = {90, 85, 80, 95, 88};

Characteristics of Arrays

    Elements are stored in contiguous memory locations.

    All elements are of the same data type.

    Array size is fixed (static memory allocation).

    Elements can be accessed directly using index.

    Efficient for random access, but costly for insertion and deletion.

One-Dimensional Array (1D Array)

    Stores data in a single row or column.
    int arr[5] = {10, 20, 30, 40, 50};

Two-Dimensional Array (2D Array)

    Stores data in rows and columns — like a matrix.
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

Multi-Dimensional Array

    An array with more than two dimensions (used in 3D modeling, scientific data).
    int cube[3][3][3];

| Operation                                | Description                                  | Time Complexity | Space Complexity |
| ---------------------------------------- | -------------------------------------------- | --------------- | ---------------- |
| **Traversal**                            | Visit each element once                      | O(n)            | O(1)             |
| **Insertion (at end)**                   | Add element at last position                 | O(1)            | O(1)             |
| **Insertion (at beginning/middle)**      | Shift elements and insert                    | O(n)            | O(1)             |
| **Deletion (at end)**                    | Remove last element                          | O(1)            | O(1)             |
| **Deletion (at beginning/middle)**       | Shift elements left                          | O(n)            | O(1)             |
| **Searching (Linear)**                   | Sequentially check each element              | O(n)            | O(1)             |
| **Searching (Binary)**                   | Divide array in half (only for sorted array) | O(log n)        | O(1)             |
| **Accessing (by index)**                 | Directly access using index                  | O(1)            | O(1)             |
| **Sorting (Bubble/Selection/Insertion)** | Arrange elements                             | O(n²)           | O(1)             |
| **Sorting (Merge/Quick Sort)**           | Efficient sorting algorithms                 | O(n log n)      | O(n)             |

when to use array
1) to implement other data structures
2) to implement caching (Caching is a technique used to store copies of frequently accessed data in a temporary storage area (called a cache), so that future requests for that data can be served faster.)
3) In Graphs

*/
