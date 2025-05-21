//program to find gcd
#include<stdio.h>
#include<stdbool.h>

int main(){

    int m, n;
    int gcd;
    
        printf("Enter the two digits ");
        printf("First digit: ");
        scanf("%d",&m);

        printf("Enter second didgit");
        scanf("%d",&n);
    for(;;){
              if (m > n)
              {
            if (n == 0)
                {
                    m = gcd; 
                    break;
                }
                
            
                int rem = m %n;
                m =n;
                n = rem;
                gcd = m;
            
                
              }
              
            
        
           
        

    }
        
        
        
    
    printf("The gcd is: %d", gcd);
    



    return 0;
}

