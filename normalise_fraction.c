#include <stdio.h>
#include <stdlib.h>


int main()
{
    int frac1[2]={};
    printf("Enter numerator and denominator of the fraction: ");
    scanf("%d %d", &frac1[0], &frac1[1]);

    if(frac1[1]==0)
    {
        printf("Error:Invalid fraction!");
        exit(0);
    }

    printf("Fraction entered: %d/%d\n", frac1[0], frac1[1]);  
    if(frac1[0]==0)
    {
        printf("Normalised fraction: 0");
        exit(0);
    }
    
    for(int i = abs(frac1[1]); i > 0; i--)
    {
        if((frac1[0]<0 && frac1[1]<0) || (frac1[0]>0 && frac1[1]<0))
        {
            frac1[0]=-frac1[0];
            frac1[1]=-frac1[1];

        }
        
        if(frac1[0]%i == 0 && frac1[1]%i == 0)
        {
            frac1[0]=frac1[0]/i;
            frac1[1]=frac1[1]/i;
        }
    }
    if(frac1[1]==1)
    {
        printf("Normalised fraction: %d", frac1[0]);
        exit(0);
    }
    
    printf("Normalised fraction: %d/%d\n", frac1[0], frac1[1]);
 
    return 0;
}
