#include <stdio.h>
#include <string.h>

int main()
{
    char s[105];
    int count = 0;
    fgets(s, sizeof(s), stdin);

    for (int i = 0; i < strlen(s) - 1; i++)
    {
        char comp[2] = {"1"};
        if (s[i] == comp[0])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        strcat(s, "0");
    }
    else
    {
        strcat(s, "1");
    }
    
    puts(s);

    return 0;
}