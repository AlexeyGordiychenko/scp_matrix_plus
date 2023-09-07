#ifndef __SCPMATRIX_H__
#define __SCPMATRIX_H__

#include <iostream>
#include <stdexcept>

class SCPMatrix {
 public:
  // Const value to compare doubles with the precision up to 7 decimal places
  static double kEps_;

  // CONSTRUCTORS AND THE DESTRUCTOR
  SCPMatrix();                                         // default
  SCPMatrix(int rows, int cols);                       // parameterized
  SCPMatrix(std::initializer_list<double> init_list);  // initializer list
  SCPMatrix(const SCPMatrix& other);                   // copy
  SCPMatrix(SCPMatrix&& other) noexcept;               // move
  ~SCPMatrix();

  // ACCESSORS AND MUTATORS
  int GetRows() const noexcept;
  int GetCols() const noexcept;
  void SetRows(int rows);
  void SetCols(int cols);
  void SetSize(int rows, int cols);

  // METHODS
  // Checks matrices for equality with each other
  bool EqMatrix(const SCPMatrix& other) const noexcept;
  // Adds the second matrix to the current one
  void SumMatrix(const SCPMatrix& other);
  // Subtracts another matrix from the current one
  void SubMatrix(const SCPMatrix& other);
  // Multiplies the current matrix by a number
  void MulNumber(const double num) noexcept;
  // Multiplies the current matrix by the second matrix
  void MulMatrix(const SCPMatrix& other);
  // Creates a new transposed matrix from the current one and returns it
  SCPMatrix Transpose() const noexcept;
  // Returns the algebraic addition matrix of the current one
  SCPMatrix CalcComplements() const;
  // Calculates and returns the determinant of the current matrix
  double Determinant() const;
  // Calculates and returns the inverse matrix
  SCPMatrix InverseMatrix() const;

  // OPERATORS
  // Addition of two matrices
  SCPMatrix operator+(const SCPMatrix& other);
  // Subtraction of one matrix from another
  SCPMatrix operator-(const SCPMatrix& other);
  // Matrix multiplication
  SCPMatrix operator*(const SCPMatrix& other);
  // Matrix multiplication by a number
  SCPMatrix operator*(const double n) const noexcept;
  friend SCPMatrix operator*(double n, const SCPMatrix& other) noexcept;
  // Checks for matrices equality (EqMatrix)
  bool operator==(const SCPMatrix other) const noexcept;
  // Assignment of values from one matrix to another one
  SCPMatrix& operator=(const SCPMatrix& other);
  SCPMatrix& operator=(SCPMatrix&& other) noexcept;
  // Addition assignment (SumMatrix)
  SCPMatrix& operator+=(const SCPMatrix& other);
  // Difference assignment (SubMatrix)
  SCPMatrix& operator-=(const SCPMatrix& other);
  // Multiplication assignment (MulMatrix/MulNumber)
  SCPMatrix& operator*=(const SCPMatrix& other);
  SCPMatrix& operator*=(const double n) noexcept;
  // Indexation by matrix elements (row, column)
  double& operator()(int row, int col);
  double& operator()(int row, int col) const;

 private:
  int rows_, cols_;
  double** matrix_;

  // Check if two matrices have the same number of rows and cols
  void CheckSizes(const SCPMatrix& other) const;
  // Check if a matrix is square (rows == cols)
  void CheckSquareSize() const;

  double& GetElement(int row, int col) const;

  void AllocateMatrix();
  void DestroyMatrix();

  // Returns a matrix without a certain row and col
  SCPMatrix CrossOut(int row, int col) const;
};

#endif  //__SCPMATRIX_H__
