# Master Theorem

The Master Theorem is a mathematical formula that helps to determine the time complexity of recursive algorithms that follow a **specific pattern**.

The Master Theorem can be applied to a wide range of recursive algorithms, and it is particularly useful for analyzing divide-and-conquer algorithms.

The Master Theorem applies to the **recurrence equations** that are in the following form:: `T(n) = a T(n/b) + f(n)`

### Constraints

The following are some constraints of the equation of master’s theorem:

- `a` represents the **number of subproblems** in the recursion, and it must be greater or equal to one (`a >= 1`).
- `n/b` is assumed to have the same size for each subproblem, and `b` must be greater than one (`b > 1`) to ensure a proper divide and conquer recurrence analysis.
- `f(n)` must be an asymptotically positive function, and it is mainly a cost of operations performed other than recursive calls.


**Summary :** `a >= 1`,` b > 1`, and `f(n)` asymptotically positive function 

<!-- is a function that satisfies a certain regularity condition. -->

### Limitations

We cannot apply the master’s theorem in the following cases:

- `T(n)` is not monotone.
- `a` is not a constant.

> Monotonicity refers to the property that the time complexity of an algorithm is non-decreasing or non-increasing with respect to the size of the input. For example, an algorithm with monotone increasing time complexity means that larger input sizes take at least as much time as smaller input sizes.

---------------------------------------------------------

## Three Cases of Master Theorem

### Case 1 (Balanced Recursion)

If `f(n)` < `n ^(log_b(a))` then `T(n) = O(n ^(log_b(a)))`

### Case 2 

If `f(n)` = `n ^(log_b(a))` then `T(n) = O(n ^(log_b(a))(log(n))`

### Case 3

If `f(n)` > `n ^(log_b(a))` then `T(n) = O(f(n))` + check regularity condition `a f(n/b) ≤ c f(n)  where 0 < c < 1`

------------------------------

## How to apply the Master Method (step-by-step)

`T(n) = aT(n/b) + F(n)`

1. Extract `a`, `b` and `F(n)` from a given recurrence.
2. Determine `n ^ log_b(a)`.
3. Compare `F(n)` and `n ^ log_b(a)` asymptotically.
4. Determine the appropriate Master Method case and apply it.
    - **Case 1:**  If `f(n)` < `n ^(log_b(a))` then `T(n) = O(n ^(log_b(a)))`
    - **Case 2:**  If `f(n)` = `n ^(log_b(a))` then `T(n) = O(n ^(log_b(a))(log(n))`
    - **Case 3:**  If `f(n)` > `n ^(log_b(a))` then `T(n) = O(f(n))` + check regularity condition `a f(n/b) ≤ c f(n)  where 0 < c < 1`

----------------------------------


