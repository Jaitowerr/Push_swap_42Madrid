
#include "push_swap.h"
#include <stdio.h>


t_list	*ft_new_list(t_list *a, int index)
{
	a->index = index;
	return (a);
}



void medium_extraccion(t_list **a, t_list **b)
{
	t_list	*nodo_a;
	t_list	*comparate_nodo_a;
	int		size;
	int		posicion;
	int		index;

	index = 0;

}




void index_mayor_a_menor(t_list **a, int index)
{
	t_list	*nodo_a;
	t_list	*comparate_nodo_a;


	while(*a)
	{
		nodo_a = *a;
		comparate_nodo_a = *a;

		comparate_nodo_a = comparate_nodo_a->next;

		while(comparate_nodo_a)
		{
			if (nodo_a->value < comparate_nodo_a->value)
				nodo_a = comparate_nodo_a;
			comparate_nodo_a = comparate_nodo_a->next;
		}
		nodo_a->index 
		
	}

}
