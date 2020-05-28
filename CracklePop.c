#include <stdio.h>

int main()
{
    int i;
    for(i=1 ; i<101 ; i++)
    {
        if(i%3 == 0)
        {
            if(i%5 == 0)
            {
                printf("CracklePop\n");
            }
            else printf("Crackle\n");
        }
        else if(i%5 == 0)
            {
                printf("Pop\n");
            }
            else printf("%d \n",i);
        
    }

    return 0;
}