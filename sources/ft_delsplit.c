
#include <libft.h>

void					ft_delsplit(char ***split)
{
	char				**t1;
	char				**t2;

	if (split && *split)
	{
		t1 = *split;
		while (*t1)
		{
			t2 = t1;
			t1++;
			ft_strdel(t2);
		}
		ft_memdel((void**)split);
	}

}
