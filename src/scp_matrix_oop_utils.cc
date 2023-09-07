#include "scp_matrix_oop.h"

void SCPMatrix::CheckSizes(const SCPMatrix& other) const {
  if (rows_ != other.rows_ || cols_ != other.cols_) {
    throw std::invalid_argument("Mismatched matrix sizes.");
  }
}

void SCPMatrix::CheckSquareSize() const {
  if (rows_ != cols_) {
    throw std::invalid_argument("Matrix is not square.");
  }
}

double& SCPMatrix::GetElement(int row, int col) const {
  if (row < 0 || row >= rows_ || col < 0 || col >= cols_) {
    throw std::out_of_range("Index is outside of the matrix.");
  }
  return matrix_[row][col];
}

void SCPMatrix::AllocateMatrix() {
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

void SCPMatrix::DestroyMatrix() {
  for (int i = 0; i < rows_; i++) delete[] matrix_[i];
  delete[] matrix_;
}

SCPMatrix SCPMatrix::CrossOut(int row, int col) const {
  SCPMatrix result(rows_ - 1, cols_ - 1);
  for (int i = 0, k = i == row; i < result.rows_; i++, k += i == row) {
    for (int j = 0, m = j == col; j < result.cols_; j++, m += j == col) {
      result.matrix_[i][j] = matrix_[i + k][j + m];
    }
  }
  return result;
}
