#include "libft.h"

char	ft_f(unsigned int index, char chara)
{
	if (index == 255)
		return ('0');
	if (ft_islower(chara))
		return (chara - 32);
	return (chara);
}


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;

	str = (char *)s;
	if (!s)
		return (NULL);
	str = malloc(ft_strlen(str) + 1);
	while (*str)
		(*f) ([]);
}
