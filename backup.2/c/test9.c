#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for each row
    for (i = rows; i >= 1; --i) {
        // Loop to print '*' in each row
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
