/* college reports using 3 dimensional array */
#include <stdio.h>
#include <conio.h>

void main() {
    int a[3][5][3], i, j, k, sum = 0;
    float avg;
    clrscr();

    for (i = 0; i < 3; i++) {
        printf("\n\n ************************************");
        printf("\n enter details for college %d", i + 1);
        printf("\n ************************************");

        for (j = 0; j < 5; j++) {
            printf("\n enter student %d marks :", j + 1);

            for (k = 0; k < 3; k++) {
                printf("\n enter marks in subject %d: ", k + 1);
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    printf("\n\n entered data with each student's total marks and average");

    for (i = 0; i < 3; i++) {
        printf("\n\n *** record of college %d ***", i + 1);

        for (j = 0; j < 5; j++) {
            sum = 0;
            printf("\n details of student %d \n", j + 1);

            for (k = 0; k < 3; k++) {
                sum += a[i][j][k];
                printf("subject %d = %d\t", k + 1, a[i][j][k]);
            }

            avg = sum / 3.0;
            printf("\n total marks = %d\t average = %.2f", sum, avg);
            printf("\n");
        }
    }

    /* sleep(10); */
    printf("\n\n\t press any key to continue...");
    getch();
    clrscr();
    printf("\n");
}
