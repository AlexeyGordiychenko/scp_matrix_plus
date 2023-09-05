#include "s21_matrix_oop.h"

S21Matrix S21Matrix::operator+(const S21Matrix& other) {
  S21Matrix result(*this);
  result += other;
  return result;
}

S21Matrix S21Matrix::operator-(const S21Matrix& other) {
  S21Matrix result(*this);
  result -= other;
  return result;
}

S21Matrix S21Matrix::operator*(const S21Matrix& other) {
  S21Matrix result(*this);
  result *= other;
  return result;
}

S21Matrix S21Matrix::operator*(const double n) const noexcept {
  S21Matrix result(*this);
  result *= n;
  return result;
}

S21Matrix operator*(const double n, const S21Matrix& other) noexcept {
  return other * n;
}

bool S21Matrix::operator==(const S21Matrix other) const noexcept {
  return EqMatrix(other);
}

S21Matrix& S21Matrix::operator=(const S21Matrix& other) {
  if (this != &other) {
    *this = std::move(S21Matrix(other));
  }
  return *this;
}

S21Matrix& S21Matrix::operator=(S21Matrix&& other) noexcept {
  if (this != &other) {
    std::swap(rows_, other.rows_);
    std::swap(cols_, other.cols_);
    std::swap(matrix_, other.matrix_);
  }
  return *this;
}

S21Matrix& S21Matrix::operator+=(const S21Matrix& other) {
  SumMatrix(other);
  return *this;
}

S21Matrix& S21Matrix::operator-=(const S21Matrix& other) {
  SubMatrix(other);
  return *this;
}

S21Matrix& S21Matrix::operator*=(const S21Matrix& other) {
  MulMatrix(other);
  return *this;
}

S21Matrix& S21Matrix::operator*=(const double n) noexcept {
  MulNumber(n);
  return *this;
}

double& S21Matrix::operator()(int row, int col) { return GetElement(row, col); }

double& S21Matrix::operator()(int row, int col) const {
  return GetElement(row, col);
}
