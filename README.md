# matrix.h

### Implementation of matrix.h library for processing numerical matrices in the C programming language. Matrices are one of the basic data structures in programming, e.g. they are used to represent table values, for computational tasks and neural networks.

   This is an educational project, so it's no longer supported!
> 15.12.2022

## Important notes

 - The library developed in C language of C11 standard using gcc compiler as a static library with the header file s21_matrix.h(see `s21_matrix.a` goal in Makefile)
 - The library's code, including headers, makefile and library itself located in the src folder
 - Written code follows the Google style. Legacy and outdated functions are not used according to POSIX.1-2017 standard(see `clang` goal in Makefile).
 - Integration tests covered all of the library's functions by unit-tests using the `check.h` library. Unit-tests checks the results of implementation by comparing them with the implementation of the standard matrix.h library(see `test` goal in Makefile). 
 - Unit tests coverage checked using gcov. It provides a gcov report in the form of an html page(see `gcov_report` goal in Makefile).
 - The programs developed according to the principles of structured programming, duplication in the code is avoided
 - Verifiable accuracy of the fractional part is up to 6 matrix places

## Basic operations with matrices:

### Matrix structure in C language:

```c
typedef struct matrix_struct {
    double** matrix;
    int rows;
    int columns;
} matrix_t;
```
- create_matrix (creation),
- remove_matrix (cleaning and destruction),
- eq_matrix (comparison),
- sum_matrix (addition),
- sub_matrix (subtraction),
- mult_matrix (multiplication),
- mult_number (multiplication by number),
- transpose (transpose),
- determinant (calculation of determinant),
- calc_complements (calculation of matrix of algebraic complements),
- inverse_matrix (finding inverse of the matrix).
