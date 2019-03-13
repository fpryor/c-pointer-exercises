//
// Frank Pryor 3/12/19
//

#include <stdio.h>

void run_local_array() {
    printf("Running local array\n");

    // The array variable is of type struct
struct T {
    int x;
    int y;
    int z;
};
    int i;
    int j = 1;
    struct T t_arr[3];

        for (i = 0; i < 3; i++) {

            t_arr[i].x = j;
            t_arr[i].y = j*j;
            t_arr[i].z = j*j*j;
            j = j + 1;
        }

     for (i = 0; i < 3; i++){

         printf("%d,", t_arr[i].x);
         printf("%d,", t_arr[i].y);
         printf("%d\n", t_arr[i].z);
    }
}