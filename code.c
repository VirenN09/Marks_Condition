#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if (marks>=85)
    {
         printf("you have been awarded Grade A");
    }
    else if(marks>=70)
    {
         printf("you have been awarded Grade B");
    }
     else if(marks>=55)
    {
         printf("you have been awarded Grade C");
    }
     else if(marks>=40)
    {
         printf("you have been awarded Grade D");
    }
    else
    {
        printf("you have been awarded Grade F");
    }

}
