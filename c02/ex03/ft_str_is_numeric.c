

# include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
		{
			return (0);
		}
		++i;
	}
	return (1);
}



int    main(void)
{
    char a[] = "15143";
    printf("%d\n",ft_str_is_numeric(a) );
}
