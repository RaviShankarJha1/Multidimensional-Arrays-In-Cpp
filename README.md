# Exp-8-2D-Arrays-in-C-plus-plus  

## Aim  
To study and implement the concept of **2D Arrays (Matrices)** in C++ through practical examples such as matrix display, addition, multiplication, diagonal sum, and transpose.  

## Software Required  
- Visual Studio  

## Theory  
A **multi-dimensional array** is an array with more than one dimension. Unlike one-dimensional arrays that grow in a single direction, multi-dimensional arrays grow in multiple directions.  

The most commonly used are:  
- **2D Arrays**: grow in two directions (rows and columns).  
- **3D Arrays**: grow in three directions (depth, rows, and columns).  

### 2D Arrays  
A two-dimensional array in C++ is a collection of elements arranged in rows and columns, resembling a grid or table.  

Like 1D arrays, 2D arrays can be initialized with values inside curly brackets `{}`, but here, each row is enclosed within its own set of braces.  

## Implementation  
In this experiment, the usage of **2D arrays** was implemented using several programs:  
- Displaying a Matrix  
- Addition of Matrices  
- Multiplication of Matrices  
- Diagonal Addition of a Matrix  
- Transpose of a Matrix  

## Algorithms  

### Matrix Multiplication  
1. Start  
2. Input rows and columns for Matrix 1 (`m x n`)  
3. Input rows and columns for Matrix 2 (`x x y`)  
4. If `n != x` → Display error, stop  
5. Input elements for both matrices  
6. Initialize a result matrix with 0  
7. Use triple nested loops to multiply:  
   - `result[i][j] += mat1[i][k] * mat2[k][j]`  
8. Display both input matrices and the result matrix  
9. End  

### Sum of Diagonal Elements in a Square Matrix  
1. Start  
2. Input rows and columns of the matrix  
3. If rows ≠ columns → Display error, stop  
4. Input matrix elements  
5. Initialize `diagsum = 0`  
6. Loop through `i = 0` to `n-1`:  
   - Add `mat[i][i]` to `diagsum`  
7. Display the matrix and diagonal sum  
8. End  

## Conclusion  
The implementation of **2D arrays** was successfully demonstrated through programs on matrix display, addition, multiplication, diagonal sum, and transpose.  
