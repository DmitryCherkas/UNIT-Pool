
#include <unistd.h>

void    ft_print_letter(char c)
{
    int i;

    i = -1;
    if (c >= 'a' && c <= 'z')
        while (++i < (c - 'a' + 1))
            write(1, &c, 1);
    else    if (c >= 'A' && c <= 'Z')
        while (++i < (c - 'A' + 1))
            write(1, &c, 1);
    else
        write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            ft_print_letter(argv[1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
