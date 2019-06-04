
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *nwlst;
	t_list *temp;

	nwlst = NULL;
	if (!(temp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if ((void *)content == NULL)
	{
		temp -> content = NULL;
		temp -> content_size = 0;
		temp -> next = NULL;
		nwlst = temp;
	}
	else
	{
		temp -> content =(void *) content;
		temp -> content_size = content_size;
		temp -> next = NULL;
		nwlst = temp;
	}
	return (nwlst);
}
