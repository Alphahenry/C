//knowing number of elements in an array

#include<stdio.h>

int main(){

   int container[] = {20,30,65,80};

   int size_container = sizeof(container);

   printf("The size of te conatiner is: %d bytes\n", size_container);

   //each box in the conatiner
   int sez_ofEach = sizeof(container[0]);

   printf("the size of 1 box is: %d bytes\n", sez_ofEach);


   //no of boxes in the conatiner

   int no_of_boxes = (int) ((sizeof(container)) / sizeof(container[0]));

   printf("The no of boxes in the container is: %d\n", no_of_boxes);


    return 0;
}