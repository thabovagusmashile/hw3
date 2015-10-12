/* A simple test harness for memory alloction. */

#include "mm_alloc.h"
#include <stdio.h>
int main(int argc, char **argv)
{
   printf("size of s_block : %d\n", sizeof(struct s_block));

    void *p = NULL;
    p = malloc(1024);
    if(p == NULL) printf("malloc fail\n");
    else printf("malloc success\n");
    return 0;
}
