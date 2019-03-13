//
// Frank Pryor 3/12/19
//

#include <stdio.h>
#include <stdlib.h>



void run_monolithic_array() {
    printf("Running monolithic array\n");

    // The variable of array is type struct
    struct L {
        int m;
        int n;
        };

        struct L *int_array[3];
        int_array[2] = (struct L*) malloc(3 * sizeof(struct L*));

    for (int i = 0; i <3; i++) {
        int_array[i] = (struct L*) malloc(sizeof(struct L));
    }
    int j = 1;

    for (int i = 0; i < 3; i++) {
        int_array[i]->m = j;
        int_array[i]->n = j*j;
        j = j + 2;
    }

    for (int i = 0; i < 3; i++){

        printf("%d,", int_array[i]->m);
        printf("%d\n", int_array[i]->n);

    }

    free(*int_array);

}