#include<stdio.h>
int main(){

  //ask user to enter input
   int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16;

   printf("Enter 16 numbers: \n");


   scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12,&i13,&i14,&i15,&i16);


   printf("%d%d%d%d\n", i1,i2,i3,i4);
   printf("%d%d%d%d\n", i5,i6,i7,i8);
   printf("%d%d%d%d\n", i9,i10,i11,i12);
   printf("%d%d%d%d\n", i13,i14,i15,i16);


   int row_sum1 = i1+i2+i3+i4;
   int row_sum2 = i5 +i6 +i7 +i8;
   int row_sum3 = i9 +i10 + i11 + i12;
   int row_sum4 = i13 +i14 + i15 + i16;

   int column_row1 = i1 + i5 + i9 + i13;
   int column_row2 = i2 + i6+ i10 + i14;
   int column_row3 = i3 + i7 + i11 + i15;
   int column_row4 = i4 + i8 + i12 + i16;

   int diagnol1 = i13 + i10 + i7 + i14;
   int diagnol2 = i16 + i11 + i16 + i1;



   printf("Row sums is : %d,%d,%d,%d\n ", row_sum1, row_sum2,row_sum3, row_sum4);
   printf("column rows is: %d,%d,%d,%d\n",column_row1, column_row2,column_row3,column_row4);
   printf("diagnols total is: %d,%d\n", diagnol1,diagnol2);

   





    return 0;
}