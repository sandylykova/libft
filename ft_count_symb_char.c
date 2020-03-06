#include "libft.h"

/*
** Counts total number of symbols and characters except char c.
*/

int ft_count_symb_word(char *s, char c)
{
	int i;
	int total;

	i = 0;
	total = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			total++;
			i++;
		}
	}
	return (total);
}