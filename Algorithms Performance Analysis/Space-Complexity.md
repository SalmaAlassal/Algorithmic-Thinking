# Space Complexity

Space complexity refers to the amount of memory space required by an algorithm to solve a problem. The memory type could include registers, cache, RAM, virtual memory, and secondary memory.

Space complexity can be an important consideration when analyzing the efficiency of an algorithm, as algorithms that require more memory space can be slower or less efficient than those that require less space.

When analyzing the space complexity of an algorithm, we typically focus on the worst-case scenario. This means that we determine the maximum amount of space the algorithm will need to solve a problem, based on the largest possible input size. We use this worst-case space complexity to compare the efficiency of different algorithms and determine which algorithm is best suited for a particular problem.

## Big O Notation

The space Complexity of an algorithm is the **total space taken by the algorithm with respect to the input size**. Space complexity includes **both Auxiliary space and space used by input**. So to find space-complexity, it is enough to calculate the space occupied by the variables used in an algorithm/program.

We can express the space complexity of an algorithm using big O notation. The space complexity of an algorithm is usually expressed as `O(n)`, where `n` is the size of the input data.

Space complexity is a parallel concept to time complexity. If we need to create an array of size `n`, this will require `O(n)` space. If we create a two-dimensional array of size n*n, this will require `O(n^2)` space. If we create a three-dimensional array of size `n*n*n`, this will require `O(n^3)` space.


## Analyzing Space Complexity

When analyzing the space complexity of an algorithm, there are several factors that we need to consider. Here are some key things to keep in mind:

### Input Size

The amount of memory required by an algorithm may depend on the size of the input data. 

For example, an algorithm that sorts an array of `n` elements will require more memory than an algorithm that sorts an array of `n/2` elements.

### Data Structures

The use of data structures, such as arrays, lists, and trees, can significantly impact the space complexity of an algorithm. 

For example, a binary tree requires more memory than a linked list, and a linked list requires more memory than an array.

### Auxiliary Space

Auxiliary space refers to the extra memory space used by an algorithm, in addition to the input data. We need to consider how much auxiliary space the algorithm requires and how it is used. 

For example, an algorithm that uses a stack to store temporary data will require more memory than an algorithm that uses a single variable.

### Recursive Calls

Recursive algorithms can be particularly tricky to analyze in terms of space complexity, as each recursive call adds a new layer to the call stack. We need to consider how many recursive calls are made and how much memory each call requires. 

For example, a recursive algorithm that makes `n` recursive calls will require `O(n)` space.

### Language and platform

The space complexity of an algorithm can depend on the programming language and platform being used. Different languages and platforms may have different memory management systems and allocate memory differently. 

For example, a Java program may require more memory than a C++ program, even if they are both solving the same problem.


By considering these factors and analyzing the worst-case scenario for each one, we can determine the space complexity of an algorithm and make informed decisions about its efficiency and suitability for a particular problem.

-------------------------------------

# Some simple examples in C++ :

## Variable Declaration

The space complexity of variable declaration is `O(1)`, because it requires a fixed amount of memory.

```cpp
int a = 10; // space complexity = O(1)
double b = 3.14; // space complexity = O(1)
char c = 'A'; // space complexity = O(1)
```

## Array Declaration

The space complexity of array declaration is proportional to the size of the array, because it requires memory to store each element of the array.

```cpp
int arr[n]; // space complexity = O(n)
```

## Array Indexing

The space complexity of array indexing is O(1), because it does not require any additional memory allocation (the array has already been allocated in memory)


```cpp
int arr[100];
int x = arr[0]; // space complexity = O(1)
```

## String Concatenation

The space complexity of string concatenation is proportional to the length of the resulting string, because it requires memory to store each character in the resulting string.

```cpp
string str1 = "Hello";
string str2 = "World";
string result = str1 + str2; // space complexity = O(length of str1 + length of str2)
```

> In C++, the exact space complexity of a string may vary depending on the implementation, but it is typically `O(n)`, where n is the length of the string. This is because the size of the string is proportional to the number of characters it contains.

## Function Calls

When a function is called in C++, the memory required for local variables declared within the function is allocated on the stack. 

The space complexity of the foo() function call is `O(1)`, because the amount of memory required for the local variables is constant.

```cpp
void foo(int n) {
    int a = n * 2;
    double b = 3.14;
}

int main() {
    foo(10); // space complexity = O(1)
    foo(100); // space complexity = O(1)
}
```

## Recursion

Space complexity of recursive algorithm is proportinal to maximum depth of recursion tree generated. If each function call of recursive algorithm takes `O(m)` space and if the maximum depth of recursion tree is `n` then space complexity of recursive algorithm would be `O(n * m)`

### Factorial Function

It calculates the product of all positive integers up to a given number. 

The space complexity of the factorial function is `O(n)`, because the function makes n recursive calls, each of which requires a constant amount of memory to store the function arguments and return address.

```cpp
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
```

### Fibonacci Function

The Fibonacci function calculates the nth number in the Fibonacci sequence, which is defined as the sum of the two preceding numbers. 

The space complexity of the Fibonacci function is `O(n)` because we’re not adding all of the function calls to the stack at once. We are only making `n` calls at any given time as we move up and down branches.
  - When a function is called, it is added to the stack.
  - When a function returns, it is popped off the stack.


```cpp
int fibonacci(int n) {
       if(n == 0) return 0;
       if(n == 1) return 1;
       return fibonacci(n - 1) + fibonaci(n - 2);
}
```

------------------------------------------------------------------------

# More Examples


## Addition of Two Numbers

The size of the integer data type is 2 or 4 bytes which depends on the compiler. Now, let's assume the size as 4 bytes. So, the total space occupied by the following program is `4 * 3 = 12 bytes`. Since no additional variables are used, no extra space is required.

The space complexity of this algorithm is `O(1)` because it only needs to store a few variables (`a`, `b`, and `c`) to perform the addition.

```cpp
#include<stdio.h>
int main()
{
  int a = 5, b = 5, c;
  c = a + b;
  printf("%d", c);
}
```

## Sum of n Numbers

The array consists of n integer elements. So, the space occupied by the array is `4 * n`. Also we have integer variables such as `n`, `i` and `sum`. Assuming 4 bytes for each variable, the total space occupied by the program is `4n + 12 `bytes. Since the highest order of n in the equation` 4n + 12` is `n`, so the space complexity is `O(n)` or linear.

```cpp
#include <stdio.h>
int main()
{
  int n, i, sum = 0;
  scanf("%d", &n);
  int arr[n];
  for(i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    sum = sum + arr[i];
  }
  printf("%d", sum);
}
```

## Array Sum

This algorithm calculates the sum of all elements in an array.

The space complexity of this algorithm is `O(1)`, because it only needs to store a few variables (`sum` and `i`) to perform the sum, regardless of the size of the input array. 

```cpp
int array_sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
```

> When we talk about the space complexity of a function, we are interested in how much memory the function itself uses. 
We do not count the memory usage of the input parameters that are passed to the function or any other variables defined outside the function because they are not created by the function itself. However, when we talk about the space complexity of an entire program or algorithm, we must consider the memory usage of all the data structures used in the program or algorithm, including the input parameters passed to functions. 


The space complexity of the following program is `O(1)`, because the amount of memory used by the program is constant and independent of the size of the input array.

```cpp
#include <iostream>

using namespace std;

int array_sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    int sum = array_sum(arr1, 5);

    cout << sum << endl;

    return 0;
}
```


The space complexity of the following program is `O(n)`, where n is the size of the input array. 

We can break down the space usage into the following components:

- The `n`, `i` and `sum` variables space complexity → O(1).

- The` arr` array space complexity → O(n).

- `array_sum` function space complexity → O(1). 

Therefore, the total space complexity of the program is the sum of the space complexity of each component, which is:

`O(1) + O(1) + O(1) + O(n) + O(1) = O(n)`

This means that the space complexity of the program is O(n), where n is the size of the input array. As the input array gets larger, the amount of memory used by the program will increase proportionally.


```cpp
#include <iostream>

using namespace std;

int array_sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = array_sum(arr, 5);

    cout << sum << endl;

    return 0;
}
```

## Factorial

This algorithm calculates the factorial of a given number.

The space complexity of this algorithm is `O(1)`, because it only needs to store a few variables (`result` and `i`) to perform the factorial calculation, regardless of the size of the input number.

```cpp
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
```

------------------------------------------------------------------------