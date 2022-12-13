#include "s21_matrix.h"

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int res = OK;
  if (A->rows > 0 && B->rows > 0 && A->columns > 0 && B->columns > 0) {
    if (A->rows == B->rows && A->columns == B->columns) {
      res = s21_create_matrix(A->rows, A->columns, result);
      if (res == OK)
        for (int i = 0; i < A->rows; i++) {
          for (int j = 0; j < A->columns; j++) {
            result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
          }
        }
    } else {
      res = CALC_ERROR;
    }
  } else {
    res = INCORRECT_MATRIX;
  }
  return res;
}