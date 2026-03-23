//void pointer(one that does not have a data type)

#include<stdio.h>

int main(){
    int a = 10;

    float *fp;
    char *cp;

    void *vp;

//these are wrong(data type issue)
   // fp = &a;
    //cp = &a;

    //correct
    vp = &a;

    //printf("fp = %d\n", *fp);
    //printf("cp = %d\n", *cp);
    printf("vp = %d\n", *(int *)vp);



    return 0;
}