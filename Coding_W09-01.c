#include <stdio.h>

int main() {
    int start, stop;
    do {
        printf("Enter start number: ");
        scanf("%d", &start);
        printf("Enter stop number: ");
        scanf("%d", &stop);

        if (start == stop) {
            printf("Your Start number is equal to Stop number, please try again!\n");
            continue;
        }
        if (start > stop) {
            printf("Your Start number is greater than Stop number, please try again!\n");
            continue;
        }
        printf("Start number is %d and stop number is %d\n", start, stop);
        printf("---------------------\n");
        printf("Sequence from start to stop:");
        int i = start;
        while (i <= stop) {
            printf("%d ", i);
            i++;
        }

        printf("\nThank you\n");
        break;
    } while (1);

    return 0;
}