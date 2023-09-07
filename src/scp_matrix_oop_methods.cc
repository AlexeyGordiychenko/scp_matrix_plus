#include "scp_matrix_oop.h"

bool SCPMatrix::EqMatrix(const SCPMatrix &other) const noexcept {
  if (rows_ != other.rows_ || cols_ != other.cols_) return false;
  if (this == &other) return true;
  for (auto i = 0; i < rows_; i++) {
    for (auto j = 0; j < cols_; j++) {
      if (std::abs(matrix_[i][j] - other.matrix_[i][j]) > kEps_) return false;
    }
  }
  return true;
}

void SCPMatrix::SumMatrix(const SCPMatrix &other) {
  CheckSizes(other);
  for (auto i = 0; i < rows_; i++) {
    for (auto j = 0; j < cols_; j++) {
      matrix_[i][j] += other.matrix_[i][j];
    }
  }
}

void SCPMatrix::SubMatrix(const SCPMatrix &other) {
  CheckSizes(other);
  for (auto i = 0; i < rows_; i++) {
    for (auto j = 0; j < cols_; j++) {
      matrix_[i][j] -= other.matrix_[i][j];
    }
  }
}

void SCPMatrix::MulNumber(const double num) noexcept {
  for (auto i = 0; i < rows_; i++) {
    for (auto j = 0; j < cols_; j++) {
      matrix_[i][j] *= num;
    }
  }
}

void SCPMatrix::MulMatrix(const SCPMatrix &other) {
  if (cols_ != other.rows_) {
    throw std::invalid_argument(
        "Number of columns of the first matrix doesn't match to the number of "
        "rows of the second matrix.");
  }
  SCPMatrix result(rows_, other.cols_);

  for (auto i = 0; i < rows_; i++)
    for (auto j = 0; j < other.cols_; j++)
      for (auto k = 0; k < cols_; k++)
        result.matrix_[i][j] += matrix_[i][k] * other.matrix_[k][j];

  *this = result;
}

SCPMatrix SCPMatrix::Transpose() const noexcept {
  SCPMatrix result(cols_, rows_);
  for (auto i = 0; i < rows_; i++)
    for (auto j = 0; j < cols_; j++) result.matrix_[j][i] = matrix_[i][j];
  return result;
}

SCPMatrix SCPMatrix::CalcComplements() const {
  CheckSquareSize();
  SCPMatrix result(rows_, cols_);
  for (auto i = 0; i < rows_; i++)
    for (auto j = 0; j < cols_; j++) {
      double det = CrossOut(i, j).Determinant();
      result.matrix_[i][j] = (i + j) % 2 ? -det : det;
    }
  return result;
}

double SCPMatrix::Determinant() const {
  CheckSquareSize();
  double result = 0;
  if (rows_ == 1)
    result = matrix_[0][0];
  else if (rows_ == 2) {
    result = (matrix_[0][0] * matrix_[1][1] - matrix_[1][0] * matrix_[0][1]);
  } else {
    for (auto i = 0; i < rows_; i++) {
      double alem = i % 2 ? -matrix_[0][i] : matrix_[0][i];
      double det = CrossOut(0, i).Determinant();
      result += alem * det;
    }
  }
  return result;
}

SCPMatrix SCPMatrix::InverseMatrix() const {
  double det = Determinant();
  if (det == 0) {
    throw std::invalid_argument("Determinant is zero.");
  }
  SCPMatrix result;
  if (rows_ == 1) {
    result(0, 0) = 1 / det;
  } else {
    result = CalcComplements().Transpose();
    result.MulNumber(1.0 / det);
  }
  return result;
}
