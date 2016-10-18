
#include <unistd.h>

int ft_size(char *arr)
{
    int i;

    i = 0;
    while (arr[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int size;

    if (argc == 2)
    {
        size = ft_size(argv[1]);
        while (--size >= 0)
            write(1, &argv[1][size], 1);
    }
    write(1, "\n", 1);
    return (0);
}
