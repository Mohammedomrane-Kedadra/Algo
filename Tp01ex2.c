#include <stdio.h>

void afficherMatrice(int n, int matrix[n][n]);
void afficherLignesPaires(int n, int matrix[n][n]);
void afficherElementsImpairs(int n, int matrix[n][n]);
void afficherDiagonales(int n, int matrix[n][n]);

int main() {
    int n = 4;
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    afficherMatrice(n, matrix);
    afficherLignesPaires(n, matrix);
    afficherElementsImpairs(n, matrix);
    afficherDiagonales(n, matrix);

    return 0;
}
