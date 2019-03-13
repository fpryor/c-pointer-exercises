//
// Created by Ivo Georgiev on 2019-03-07.
//
#include <stdio.h>

void run_array_of_pointers() {
    printf("Running array of pointers\n");

    struct p_struct {
        int a;
        char b;
    };

    char letters[] = {'a', 'b', 'c', 'e', 'f', 'g', 'h'};

    struct p_struct* ptrs = (struct p_struct*) malloc(sizeof(struct p_struct) * 7);

    for (int i = 0; i < 7; i ++){
        ptrs[i].a = i;
        ptrs[i].b = letters[i];
    }

    for (int i = 0; i < 7; i++){
        printf("%d,", ptrs[i].a);
        printf("%c\n", ptrs[i].b);
    }

    free(ptrs);
    ptrs = NULL;


    // The array variable is of a pointer type
    //int ***ptr_array;

    //ptr_array = (int ***) malloc(sizeof(int **) * 3);

    //for (int i=0; i<3; i++)
        //ptr_array[i] = (int **) malloc(sizeof(int *) * 3);

    //for (int i=0; i<3; i++)
        //for (int j=0; j<4; j++)
            //ptr_array[i][j] = (int *) malloc(sizeof(int) * 3);

    //int p;
    //p = 0;
    //for  (int i=0; i<3; i++)
        //for (int j=0; j<3; j++)
            //for (int k=0; k<3; k++) {
                //ptr_array[i][j][k] = p;
                //p = p + 2;
            //}

    //for  (int i=0; i<3; i++)
        //for (int j=0; j<3; j++) {
            //printf("\n");
            //for (int k = 0; k < 3; k++) {
                //printf(" %d", ptr_array[i][j][k]);
            //}

        //}
    //printf("\n");


    //for (int i=0; i<3; i++)
        //for (int j=0; j<3; j++)
            //free(ptr_array[i][j]);

    //for (int i=0; i<3; i++)
        //free(ptr_array[i]);

    //free(ptr_array);



}