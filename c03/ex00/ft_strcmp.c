int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_strcmp("Hellopreeti", "42wolfsburg"));
	printf("\n%d", ft_strcmp("codewith", "me"));
	printf("\n%d", ft_strcmp("me", "codewith"));
	printf("\n%d", ft_strcmp("code42", "code42"));
}
