# Input

In competitive programming, it is important to read input as fast as possible, so we save valuable time.

# Cin vs Scanf

- `scanf` is typically faster than `cin`, especially when reading large amounts of input.

- `scanf` allows for more fine-grained control over the formatting of input. It can be used to read input in a specific format, such as integers, floats, or strings, and can be used to skip over certain characters or whitespace.

- `scanf` is a standard `C` library function, whereas `cin` is part of the `C++` iostream library. 

| Format Specifier|	Description |
|-----------------|-------------|
|      `%d`       |	reads an integer value |
|      `%f      ` |	reads a floating-point value |
|      `%lf     ` |	reads a double-precision floating-point value |
|      `%c`       |	reads a single character |
|      `%s`       |	reads a string of characters |

### example

```cpp
scanf("%d", &age);
scanf("%d", &arr[i]);
```

> The `&` operator is used to pass the memory address of the variable to `scanf`, so that the integer value entered by the user can be stored in the variable.

# Fast I/O

It is often recommended to use `scanf/printf` instead of `cin/cout` for fast input and output. However, you can still use `cin/cout` and achieve the same speed as `scanf/printf` by including the following two lines in your `main()` function:

```cpp
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

Also, it is recommended to use `cout << “\n”`; instead of `cout << endl`;. `endl` is slower than `"\n"`.
