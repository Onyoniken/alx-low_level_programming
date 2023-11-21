#include <stdio.h>
/**
 * 80 - 100 grade A
 * 95 - 100 distinction
 * 90 - 94 excellent
 * 85 - 89 outstanding
 * 80 - 84 brilliant
 * 70 - 79 grade B
 * 65 - 69 grade C
 * 60 - 64 grade D
 * 50 - 59 grade E
 * below 50 grade F


int main(void) {
    int score;
    
    printf("please enter your score:\n");
    
    scanf("%d", &score);
    
    if (score >= 80 && score <= 100)
   { 
       printf("A\n");
       if (score >= 95 && score <= 100)
       {
       printf("distinction\n");
       }
       else if (score >= 90 && score <= 94)
       {
       printf("excellent\n");
       }
       else if (score >= 85 && score <= 89)
       {
        printf ("outstanding\n");
       }
       else if (score >= 80 && score <= 84)
       {
           printf ("brilliant\n");
       }
       
   }
    else if (score >= 70 && score <= 79)
    {
        printf("B\n");
    }
    else if (score >= 65 && score <= 69)
    {
        printf("C\n");
    }
    else if (score >= 60 && score <= 64)
    {
    printf("D\n");
    }
    else if (score >= 50 && score <= 59)
    
    {
        printf("E\n");
    }
    else if (score >= 0 && score <= 49)
    {
        printf("F\n");
    }
    else
    {
    printf("you entered an invalid score\n");
    }
    return 0;
}
