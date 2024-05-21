
 

#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("Alphabets from a - y are: \n");
    while(ch<='y')
    {
        printf("%c\n", ch);
        ch++;
    }

    return 0;
}
