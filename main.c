#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str);

int main()
{
    char str[] = "Hello   world  this is  a   test";
    char **result = ft_split(str);

    int i = 0;
    while (result && result[i] != NULL)
    {
        printf("Word %d: %s\n", i + 1, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}