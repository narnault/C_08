#include "ft_stock_str.h"
#include <stdlib.h>

int    ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
	return (i);
}


char	*ft_strdup(char *src)
{
	int	i;
	char	*p;

	i = 0;
	while (src[i])
		i++;
	p = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	return (p);
	free (p);
}


struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		if (tab[i].str == NULL || tab[i].copy == NULL)
			return (NULL);
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		tab[i].str = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
