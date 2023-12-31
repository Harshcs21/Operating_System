#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 3
int main() {
   
    srand(time(0));

    int numbers[n];
    int i;

   
    for (i = 0; i < n; i++) {
        numbers[i] = rand() % 10 + 1;
    }

    printf("Initial Numbers: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    while (1) {
       
        int all_zero = 1;
        for (i = 0; i < n; i++) {
            if (numbers[i] > 0) {
                all_zero = 0;
                break;
            }
        }

        if (all_zero) {
            break;
        }

        int selected_index;
        do {
            selected_index = rand() % n;
        } while (numbers[selected_index] == 0);

        numbers[selected_index]--;
        printf("Decrementing number at index %d: ", selected_index);
        for (i = 0; i < n; i++) {
            printf("%d ", numbers[i]);
        }
        printf("\n");
    }

    printf("All numbers reached 0.\n");

    return 0;
}
