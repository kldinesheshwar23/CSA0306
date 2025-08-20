#include <stdio.h>
int main() {
    int m, n, p, q;
    printf("Enter rows and columns of first matrix (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of second matrix (p q): ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 1;
    }
    int A[m][n], B[p][q], C[m][q];
    int i,j,k;
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}


