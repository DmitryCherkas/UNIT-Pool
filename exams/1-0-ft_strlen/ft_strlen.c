
#include <stdio.h>

int ft_strlen(char *str)
{
    int size;

    size = 0;
    while (str[size])
        size++;
    return (size);
}

int main()
{
    char a[] = "qqqqqqqqqqq@@@@@$$$$%%%%%^^^^&&&&&&&****";
    printf("%d\n", ft_strlen(a));
    return(0);
}
