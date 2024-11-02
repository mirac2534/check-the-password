#include <stdio.h>
#include <stdlib.h>
#define MAX_TRIES 5 // The right to maximum trial
#define PASSWORD 1234 // This is your password
int checkPasswordWithFor(); // Learn to use 'for' loop
int checkPasswordWithWhile(); // Learn to use 'while' loop
int checkPasswordWithDoWhile(); // Learn to use 'do-while' loop

int main()
{
int success;
success=checkPasswordWithFor();
success=checkPasswordWithWhile();
success=checkPasswordWithDoWhile();
 if (success)
{
    printf("correct");
}
else
{
    printf("Fail\n");
}
    return 0;
}

int checkPasswordWithFor()
{
    int i,userPassword;
    for(i=0;i<MAX_TRIES;i++) // for(yourVariable, condition, process)
    {
        printf("enter your password");
        scanf("%d",&userPassword);
        if (userPassword==PASSWORD)
            return 1;
    }
// In cases where it is unclear how many times it will return, and the condition is controlled according to an input, the While or do-while cycle is used, while in cases where the number of repetitions is certain 
// such as arrays, it is preferable to use the for cycle.
     int checkPasswordWithWhile ()
     {
         int i=0, userPassword;
         while(i<MAX_TRIES) // while(condition)
         {
             printf("enter your password");
             scanf("%d",&userPassword);
             if (userPassword==PASSWORD)
                return 1;
             i++;
         }
        return 0;
     }
        return 0;
}
// The do-while loop performs the operation first and then checks the condition
int checkPasswordWithDoWhile()
{
    int i=0,userPassword;
    do
    {
        printf("enter your password:");
        scanf("%d",&userPassword);
        if(userPassword==PASSWORD)
            return 1;
        i++;
    }while (i<MAX_TRIES);
    return 0;
}
