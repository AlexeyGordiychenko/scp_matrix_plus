#include "scp_matrix_oop.h"

SCPMatrix::SCPMatrix() : SCPMatrix(1, 1) {}

SCPMatrix::SCPMatrix(int rows, int cols)
    : rows_(rows), cols_(cols), matrix_(nullptr) {
  if (rows_ <= 0 || cols_ <= 0) {
    throw std::invalid_argument(
        "Number of rows and colums must be greater than zero.");
  }
  AllocateMatrix();
}

SCPMatrix::SCPMatrix(std::initializer_list<double> init_list) {
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

SCPMatrix::SCPMatrix(const SCPMatrix& other)
    : rows_(other.rows_), cols_(other.cols_) {
  AllocateMatrix();
  for (int i = 0; i < rows_; ++i) {
    std::copy(other.matrix_[i], other.matrix_[i] + cols_, matrix_[i]);
  }
}

SCPMatrix::SCPMatrix(SCPMatrix&& other) noexcept
    : rows_(other.rows_), cols_(other.cols_), matrix_(other.matrix_) {
  other.rows_ = 0;
  other.cols_ = 0;
  other.matrix_ = nullptr;
}

// Destructor
SCPMatrix::~SCPMatrix() { DestroyMatrix(); }

// Accessors

int SCPMatrix::GetRows() const noexcept { return rows_; }
int SCPMatrix::GetCols() const noexcept { return cols_; }

// Mutators
void SCPMatrix::SetRows(int rows) { SetSize(rows, cols_); }

void SCPMatrix::SetCols(int cols) { SetSize(rows_, cols); }

void SCPMatrix::SetSize(int rows, int cols) {
  if (rows <= 0 || cols <= 0) {
    throw std::invalid_argument(
        "Number of rows and colums must be greater than zero.");
  }
  if (rows == rows_ && cols == cols_) return;

  auto min_rows = std::min(this->rows_, rows);
  auto min_cols = std::min(this->cols_, cols);
  SCPMatrix resized_matrix(rows, cols);
  for (int i = 0; i < min_rows; i++) {
    std::copy(this->matrix_[i], this->matrix_[i] + min_cols,
              resized_matrix.matrix_[i]);
  }
  *this = std::move(resized_matrix);
}
