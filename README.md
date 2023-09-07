# scp_matrix+ (Individual project)

## Score:
The final score is 100% (max)

## Task
Implementation of the scp_matrix_oop.h library.

### An example of a matrix class in C++
```cpp
class SCPMatrix {
    private:
        // Attributes
        int rows_, cols_;         // Rows and columns
        double **matrix_;         // Pointer to the memory where the matrix is allocated

    public:
        SCPMatrix();              // Default constructor
        ~SCPMatrix();             // Destructor

        void SumMatrix(const SCPMatrix& other); 
        // Other methods..
}
```

## Matrix operations

There is a brief description of the matrix operations below that needs to be implemented in the developing library.

| Operation                                | Description                                                                | Exceptional situations                                                                            |
| ---------------------------------------- | -------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------- |
| `bool EqMatrix(const SCPMatrix& other)`  | Checks matrices for equality with each other                               |                                                                                                   |
| `void SumMatrix(const SCPMatrix& other)` | Adds the second matrix to the current one                                  | different matrix dimensions                                                                       |
| `void SubMatrix(const SCPMatrix& other)` | Subtracts another matrix from the current one                              | different matrix dimensions                                                                       |
| `void MulNumber(const double num) `      | Multiplies the current matrix by a number                                  |                                                                                                   |
| `void MulMatrix(const SCPMatrix& other)` | Multiplies the current matrix by the second matrix                         | the number of columns of the first matrix is not equal to the number of rows of the second matrix |
| `SCPMatrix Transpose()`                  | Creates a new transposed matrix from the current one and returns it        |                                                                                                   |
| `SCPMatrix CalcComplements()`            | Calculates the algebraic addition matrix of the current one and returns it | the matrix is not square                                                                          |
| `double Determinant()`                   | Calculates and returns the determinant of the current matrix               | the matrix is not square                                                                          |
| `SCPMatrix InverseMatrix()`              | Calculates and returns the inverse matrix                                  | matrix determinant is 0                                                                           |

Apart from those operations, you also need to implement constructors and destructors:

| Method                              | Description                                                                |
| ----------------------------------- | -------------------------------------------------------------------------- |
| `SCPMatrix()`                       | A basic constructor that initialises a matrix of some predefined dimension |
| `SCPMatrix(int rows, int cols) `    | Parametrized constructor with number of rows and columns                   |
| `SCPMatrix(const SCPMatrix& other)` | Copy constructor                                                           |
| `SCPMatrix(SCPMatrix&& other)`      | Move constructor                                                           |
| `~SCPMatrix()`                      | Destructor                                                                 |

And you also need to overload the following operators, partly corresponding to the operations above:

| Operator         | Description                                                 | Exceptional situations                                                                           |
| ---------------- | ----------------------------------------------------------- | ------------------------------------------------------------------------------------------------ |
| `+`              | Addition of two matrices                                    | different matrix dimensions                                                                      |
| `-`              | Subtraction of one matrix from another                      | different matrix dimensions                                                                      |
| `*`              | Matrix multiplication and matrix multiplication by a number | the number of columns of the first matrix does not equal the number of rows of the second matrix |
| `==`             | Checks for matrices equality (`EqMatrix`)                   |                                                                                                  |
| `=`              | Assignment of values from one matrix to another one         |                                                                                                  |
| `+=`             | Addition assignment (`SumMatrix`)                           | different matrix dimensions                                                                      |
| `-=`             | Difference assignment (`SubMatrix`)                         | different matrix dimensions                                                                      |
| `*=`             | Multiplication assignment (`MulMatrix`/`MulNumber`)         | the number of columns of the first matrix does not equal the number of rows of the second matrix |
| `(int i, int j)` | Indexation by matrix elements (row, column)                 | index is outside the matrix                                                                      |
