//
// Frank Pryor 3/12/19
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

}