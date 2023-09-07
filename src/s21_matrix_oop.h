#ifndef __S21MATRIX_H__
#define __S21MATRIX_H__

#include <iostream>
#include <stdexcept>

class S21Matrix {
 public:
  // Const value to compare doubles with the precision up to 7 decimal places
  static double kEps_;

  // CONSTRUCTORS AND THE DESTRUCTOR
  S21Matrix();                                         // default
  S21Matrix(int rows, int cols);                       // parameterized
  S21Matrix(std::initializer_list<double> init_list);  // initializer list
  S21Matrix(const S21Matrix& other);                   // copy
  S21Matrix(S21Matrix&& other) noexcept;               // move
  ~S21Matrix();

  // ACCESSORS AND MUTATORS
  int GetRows() const noexcept;
  int GetCols() const noexcept;
  void SetRows(int rows);
  void SetCols(int cols);
  void SetSize(int rows, int cols);

  // METHODS
  // Checks matrices for equality with each other
  bool EqMatrix(const S21Matrix& other) const noexcept;
  // Adds the second matrix to the current one
  void SumMatrix(const S21Matrix& other);
  // Subtracts another matrix from the current one
  void SubMatrix(const S21Matrix& other);
  // Multiplies the current matrix by a number
  void MulNumber(const double num) noexcept;
  // Multiplies the current matrix by the second matrix
  void MulMatrix(const S21Matrix& other);
  // Creates a new transposed matrix from the current one and returns it
  S21Matrix Transpose() const noexcept;
  // Returns the algebraic addition matrix of the current one
  S21Matrix CalcComplements() const;
  // Calculates and returns the determinant of the current matrix
  double Determinant() const;
  // Calculates and returns the inverse matrix
  S21Matrix InverseMatrix() const;

  // OPERATORS
  // Addition of two matrices
  S21Matrix operator+(const S21Matrix& other);
  // Subtraction of one matrix from another
  S21Matrix operator-(const S21Matrix& other);
  // Matrix multiplication
  S21Matrix operator*(const S21Matrix& other);
  // Matrix multiplication by a number
  S21Matrix operator*(const double n) const noexcept;
  friend S21Matrix operator*(double n, const S21Matrix& other) noexcept;
  // Checks for matrices equality (EqMatrix)
  bool operator==(const S21Matrix other) const noexcept;
  // Assignment of values from one matrix to another one
  S21Matrix& operator=(const S21Matrix& other);
  S21Matrix& operator=(S21Matrix&& other) noexcept;
  // Addition assignment (SumMatrix)
  S21Matrix& operator+=(const S21Matrix& other);
  // Difference assignment (SubMatrix)
  S21Matrix& operator-=(const S21Matrix& other);
  // Multiplication assignment (MulMatrix/MulNumber)
  S21Matrix& operator*=(const S21Matrix& other);
  S21Matrix& operator*=(const double n) noexcept;
  // Indexation by matrix elements (row, column)
  double& operator()(int row, int col);
  double& operator()(int row, int col) const;

 private:
  int rows_, cols_;
  double** matrix_;

  // Check if two matrices have the same number of rows and cols
  void CheckSizes(const S21Matrix& other) const;
  // Check if a matrix is square (rows == cols)
  void CheckSquareSize() const;

  double& GetElement(int row, int col) const;

  void AllocateMatrix();
  void DestroyMatrix();

  // Returns a matrix without a certain row and col
  S21Matrix CrossOut(int row, int col) const;
};

#endif  //__S21MATRIX_H__
