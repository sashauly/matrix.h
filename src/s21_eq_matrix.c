#include "s21_matrix.h"

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int res = SUCCESS;
  if (A->rows > 0 && B->rows > 0 && A->columns > 0 && B->columns > 0) {
    if (A->rows == B->rows && A->columns == B->columns) {
      for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
          if (fabs(A->matrix[i][j] - B->matrix[i][j]) > 1e-07) res = FAILURE;
        }
      }
    } else {
      res = FAILURE;
    }
  } else {
    res = INCORRECT_MATRIX;
  }
  return res;
}
