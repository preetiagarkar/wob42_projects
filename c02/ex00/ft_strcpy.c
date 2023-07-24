# include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i]!= '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}	

int main(void)
{

	
	char dest[100];
	ft_strcpy(dest ,"I like 42 school");
	printf("%s", dest);


}