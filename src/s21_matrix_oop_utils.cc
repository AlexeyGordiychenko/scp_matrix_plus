#include "s21_matrix_oop.h"

void S21Matrix::CheckSizes(const S21Matrix& other) const {
  if (rows_ != other.rows_ || cols_ != other.cols_) {
    throw std::invalid_argument("Mismatched matrix sizes.");
  }
}

void S21Matrix::CheckSquareSize() const {
  if (rows_ != cols_) {
    throw std::invalid_argument("Matrix is not square.");
  }
}

double& S21Matrix::GetElement(int row, int col) const {
  if (row < 0 || row >= rows_ || col < 0 || col >= cols_) {
    throw std::out_of_range("Index is outside of the matrix.");
  }
  return matrix_[row][col];
}

void S21Matrix::AllocateMatrix() {
  int allocated_rows = 0;
  try {
    matrix_ = new double*[rows_];

    for (; allocated_rows < rows_; allocated_rows++) {
      matrix_[allocated_rows] = new double[cols_]();
    }
  } catch (std::bad_alloc& ba) {
    // free any memory that was already allocated
    for (auto i = 0; i < allocated_rows; i++) {
      delete[] matrix_[i];
    }
    delete[] matrix_;
    throw;
  }
}

void S21Matrix::DestroyMatrix() {
  for (int i = 0; i < rows_; i++) delete[] matrix_[i];
  delete[] matrix_;
}

S21Matrix S21Matrix::CrossOut(int row, int col) const {
  S21Matrix result(rows_ - 1, cols_ - 1);
  for (int i = 0, k = i == row; i < result.rows_; i++, k += i == row) {
    for (int j = 0, m = j == col; j < result.cols_; j++, m += j == col) {
      result.matrix_[i][j] = matrix_[i + k][j + m];
    }
  }
  return result;
}
