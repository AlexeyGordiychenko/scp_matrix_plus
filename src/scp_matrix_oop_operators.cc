#include "scp_matrix_oop.h"

SCPMatrix SCPMatrix::operator+(const SCPMatrix& other) {
  SCPMatrix result(*this);
  result += other;
  return result;
}

SCPMatrix SCPMatrix::operator-(const SCPMatrix& other) {
  SCPMatrix result(*this);
  result -= other;
  return result;
}

SCPMatrix SCPMatrix::operator*(const SCPMatrix& other) {
  SCPMatrix result(*this);
  result *= other;
  return result;
}

SCPMatrix SCPMatrix::operator*(const double n) const noexcept {
  SCPMatrix result(*this);
  result *= n;
  return result;
}

SCPMatrix operator*(const double n, const SCPMatrix& other) noexcept {
  return other * n;
}

bool SCPMatrix::operator==(const SCPMatrix other) const noexcept {
  return EqMatrix(other);
}

SCPMatrix& SCPMatrix::operator=(const SCPMatrix& other) {
  if (this != &other) {
    *this = std::move(SCPMatrix(other));
  }
  return *this;
}

SCPMatrix& SCPMatrix::operator=(SCPMatrix&& other) noexcept {
  if (this != &other) {
    std::swap(rows_, other.rows_);
    std::swap(cols_, other.cols_);
    std::swap(matrix_, other.matrix_);
  }
  return *this;
}

SCPMatrix& SCPMatrix::operator+=(const SCPMatrix& other) {
  SumMatrix(other);
  return *this;
}

SCPMatrix& SCPMatrix::operator-=(const SCPMatrix& other) {
  SubMatrix(other);
  return *this;
}

SCPMatrix& SCPMatrix::operator*=(const SCPMatrix& other) {
  MulMatrix(other);
  return *this;
}

SCPMatrix& SCPMatrix::operator*=(const double n) noexcept {
  MulNumber(n);
  return *this;
}

double& SCPMatrix::operator()(int row, int col) { return GetElement(row, col); }

double& SCPMatrix::operator()(int row, int col) const {
  return GetElement(row, col);
}
