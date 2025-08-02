//biffy language

#include<stdio.h>
#include<ctype.h>

int main(){
   
   char sent1[] = {"HEY DUDE, C IS REALLY COOL"};

   
   

   for (int i = 0; i < (int)(sizeof sent1)/(sizeof sent1[0]); i++)
   {
      if(sent1[i] == 'E'){
        sent1[i] = '3';

      }else if (sent1[i] == 'A')
      {
        sent1[i] = '4';
      }
      else if (sent1[i] == 'I')
      {
        sent1[i] = '1';
      }
      else if (sent1[i] == 'O')
      {
        sent1[i] == '0';
      }
      else if (sent1[i] == 'S')
      {
        sent1[i] = '5';
      }
      
      
      
      
   }

   printf("%s",sent1);
   



    return 0;
}