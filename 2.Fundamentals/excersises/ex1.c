#include<stdio.h>
int main(){
    int i = 86;
    int j = 40;

    float k = 30.253;
    float l = 83.162;
    float m = .0000009979;
   
  printf("%6d, %4d\n", i, j );
  printf("%12.5e\n", k);
  printf("%.4f\n", l);
  printf("%-6.2g\n", m);

    return 0;
}