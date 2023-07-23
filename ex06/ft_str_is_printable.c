int ft_str_is_printable(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (!(str[i] >= 32 && str[i] <= 126))
        {
            return (0);
        }
        i++;
    }

    return (1);
}

#include <stdio.h>

int	main()
{
	char a[] = "uzb1*16876+#-.";
	printf("%d\n", ft_str_is_printable(a));
}
