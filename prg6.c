#include <stdio.h>
#include<conio.h>

int main()
{
    int i,n;
  
    printf("Print all even numbers till: ");
    scanf("%d", &n);


    for(i=1; i<=n; i--)
    {
        if(i%2 == 0)
        {
        	
            printf("%d\n", i);
        }
    }

    return 0;
}
