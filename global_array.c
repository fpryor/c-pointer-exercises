//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

struct S {
    int a;
    char b;
};
struct S s_arr[2] = {{1, 'a'}, {2, 'b'},
     };

// The array variable is of type struct


void run_global_array() {
    printf("Running global array\n");
    printf("%d\n",s_arr[0].a);
    printf("%c\n",s_arr[0].b);
    printf("%d\n",s_arr[1].a);
    printf("%c\n",s_arr[1].b);


}

