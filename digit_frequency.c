//digit frequency
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    char string[1000];
    int i,j;

    for(i=0;i<1000;i++)
    {
        scanf("%s",&string[i]);
    }

    for(j=0;j<10;j++)
    {
        int count=0;
        for(i=0;string[i]!='\0';i++)
        {
            if(j==string[i]-48)
 //48 is the ASCII value for zero. If you directly type '0' it won't work as it'll consider it as void instead of the intended zero value.
            {
                count++;
            }
        }
        printf("%d ",count);
    }

    return 0;
}

