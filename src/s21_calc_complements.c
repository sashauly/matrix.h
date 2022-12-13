#include "s21_matrix.h"

int s21_calc_complements(matrix_t *A, matrix_t *result) {
  int res = OK;
  if (A->rows > 0 && A->columns > 0) {
    if (A->rows == A->columns && A->rows != 1) {
      int n = A->rows;
      matrix_t tmp;
      int codec1, codec2;
      codec1 = s21_create_matrix(A->rows - 1, A->columns - 1, &tmp);
      if (codec1) codec2 = s21_create_matrix(n, n, result);
      if (codec1 && codec2) {
        for (int i = 0; i < n; ++i) {
          for (int j = 0; j < n; ++j) {
            double det = 0;
            get_cofactor(A, &tmp, i, j, n);
            s21_determinant(&tmp, &det);
            result->matrix[i][j] = det * pow(-1, i + j);
          }
        }
        s21_remove_matrix(&tmp);
      }
    } else {
      res = CALC_ERROR;
    }
  } else {
    res = INCORRECT_MATRIX;
  }
  return res;
}
