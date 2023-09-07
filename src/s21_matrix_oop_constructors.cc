#include "s21_matrix_oop.h"

S21Matrix::S21Matrix() : S21Matrix(1, 1) {}

S21Matrix::S21Matrix(int rows, int cols)
    : rows_(rows), cols_(cols), matrix_(nullptr) {
  if (rows_ <= 0 || cols_ <= 0) {
    throw std::invalid_argument(
        "Number of rows and colums must be greater than zero.");
  }
  AllocateMatrix();
}

S21Matrix::S21Matrix(std::initializer_list<double> init_list) {
  if (init_list.size() < 2) {
    throw std::invalid_argument(
        "Initializer list must contain at least two elements for rows and "
        "columns");
  }

  auto it = init_list.begin();
  rows_ = static_cast<int>(*it++);
  cols_ = static_cast<int>(*it++);

  AllocateMatrix();

  for (auto i = 0; i < rows_; i++) {
    for (auto j = 0; j < cols_; j++) {
      double value = 0;
      if (it != init_list.end()) value = (*it++);
      matrix_[i][j] = value;
    }
  }
}

S21Matrix::S21Matrix(const S21Matrix& other)
    : rows_(other.rows_), cols_(other.cols_) {
  AllocateMatrix();
  for (int i = 0; i < rows_; ++i) {
    std::copy(other.matrix_[i], other.matrix_[i] + cols_, matrix_[i]);
  }
}

S21Matrix::S21Matrix(S21Matrix&& other) noexcept
    : rows_(other.rows_), cols_(other.cols_), matrix_(other.matrix_) {
  other.rows_ = 0;
  other.cols_ = 0;
  other.matrix_ = nullptr;
}

// Destructor
S21Matrix::~S21Matrix() { DestroyMatrix(); }

// Accessors

int S21Matrix::GetRows() const noexcept { return rows_; }
int S21Matrix::GetCols() const noexcept { return cols_; }

// Mutators
void S21Matrix::SetRows(int rows) { SetSize(rows, cols_); }

void S21Matrix::SetCols(int cols) { SetSize(rows_, cols); }

void S21Matrix::SetSize(int rows, int cols) {
  if (rows <= 0 || cols <= 0) {
    throw std::invalid_argument(
        "Number of rows and colums must be greater than zero.");
  }
  if (rows == rows_ && cols == cols_) return;

  auto min_rows = std::min(this->rows_, rows);
  auto min_cols = std::min(this->cols_, cols);
  S21Matrix resized_matrix(rows, cols);
  for (int i = 0; i < min_rows; i++) {
    std::copy(this->matrix_[i], this->matrix_[i] + min_cols,
              resized_matrix.matrix_[i]);
  }
  *this = std::move(resized_matrix);
}
