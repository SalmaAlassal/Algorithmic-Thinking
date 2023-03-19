#  Recursion Tree method  

> Can be used to solve ANY recurrence equation.

The Recursion Tree method is a technique for analyzing the time complexity of recursive algorithms. The idea behind this method is to represent the recursion as a tree, where each node represents a single recursive call and the edges represent the cost of the recursion. By analyzing the tree, we can determine the total cost of the recursive algorithm.


# Steps

Here are the steps to follow when using the Recursion Tree method:

1. Draw the tree for at least three levels
    - Draw a tree where each node represents a single recursive call, and the edges represent the cost of that call.

2. Calculate number of levels
    - The number of levels in the tree is equal to the height of the tree, which represents the number of levels of recursion.

3. Calculate complexity of each level
    - Calculate the complexity of each level by multiplying the cost of each node by the number of nodes at that level.

4. Calculate complexity of LAST level 

5. Calculate the total cost
    - The total cost of the algorithm is the sum of the complexity of each level.