# Searching Algorithms 

Searching algorithms are algorithms that are used to find the location of a specific value in a collection of values, such as an array or a linked list. The goal of a searching algorithm is to locate the target value as efficiently as possible, typically in O(log n) or O(n) time.

There are many different searching algorithms, each with its own strengths and weaknesses. Some of the most commonly used searching algorithms include:


### Linear Search `O(n)`

This is the simplest searching algorithm and works by iterating through each element of the collection and comparing it to the target value.

### Binary Search ` O(log n)`

This is a more efficient searching algorithm that works by dividing the collection in half and checking whether the target value is in the left or right half. It then repeats this process on the appropriate half until the target value is found. Binary search is only applicable to **sorted collections**.

### Hash Table `O(1) or O(n)`

A hash table is a data structure that uses a hash function to map keys to indices in an array. The target value can then be located by computing the hash of the value and looking it up in the array. 

Hash table has a time complexity of `O(1)` on average, but worst-case time complexity can be `O(n)`.


### Interpolation Search `O(log log n) or O(n)`

This is a variation of binary search that works by estimating the position of the target value based on the values at the endpoints of the collection. 

Interpolation search has a time complexity of `O(log log n)` if the data is uniformly distributed, or `O(n)` in the worst case.


### Jump Search `O(sqrt(n))`

This is another variation of binary search that works by jumping a fixed number of steps ahead in the collection and then performing a linear search on the subarray.

-----------------

Each searching algorithm has its own tradeoffs between speed, memory usage, and implementation complexity, and the choice of algorithm depends on the specific requirements of the problem at hand.