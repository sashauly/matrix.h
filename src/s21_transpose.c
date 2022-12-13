#include "s21_matrix.h"

int s21_transpose(matrix_t *A, matrix_t *result) {
  int res = OK;
  if (A->rows > 0 && A->columns > 0) {
    res = s21_create_matrix(A->columns, A->rows, result);
    if (res == OK)
      for (int i = 0; i < A->columns; i++) {
        for (int j = 0; j < A->rows; j++) {
          result->matrix[i][j] = A->matrix[j][i];
        }
      }
  } else {
    res = INCORRECT_MATRIX;
  }
  return res;
}
