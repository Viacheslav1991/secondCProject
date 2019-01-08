#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    system("chcp 1251");
    FILE *file;
    file = fopen("my.txt", "r");

    if (file == NULL) {
        printf("file not found");
        system("pause");
        return -1;
    }
    int n, m;
    fscanf(file, "%d", &n);
    fscanf(file, "%d", &m);
    int **a;
    printf("n = %d\n", n);
    printf("m = %d\n", m);

    a = (int **) malloc(sizeof(int *) * n);
    for (int i = 0; i < n; ++i) {
        a[i] = (int *) malloc(sizeof(int) * m);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            fscanf(file, "%d", &a[i][j]);
        }
    }
    printf("Прочитана матрица: \n");
// Печать элементов матрицы
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    fclose(file);








}