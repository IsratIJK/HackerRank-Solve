#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");

    //Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.
    
    scanf("%[^\n]%*c",&sen);  
    
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);

      
    return 0;
}