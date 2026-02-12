/*
--simple fuerza el uso de el algoritmo O(n 2) seleccionado.
 */

 //vamos a utilizar Adaptación del orden por inserción o Métodos simples de extracción del mínimo/máximo que es lo mismo

 //Buscamos cual es el número menor, lo subimos arriba, dividimos el tamaño entre 2, si hay menos movimientos para arriba hacemos ra, y si hay menos por abajo rra en stack a.
 // hacemos pb y movemos a stack b
 //Una vez colocamdos toodos, movemos de b a a con pa
 //como el ultimo es el mayor, al moverlo a stack a, el primero será el mas pequeño y el utimo el mas grande


#include "push_swap.h"
#include <stdio.h>

void simple_extraccion(t_list **a, t_list **b)
{
	t_list	*nodo_a;
	t_list	*comparate_nodo_a;
	int		size;
	int		posicion;

	while(*a)
	{
		nodo_a = *a;
		comparate_nodo_a = *a;

		comparate_nodo_a = comparate_nodo_a->next;
		posicion = 0;

		while(comparate_nodo_a)
		{
			if (nodo_a->value > comparate_nodo_a->value)
				nodo_a = comparate_nodo_a;
			posicion++;
			comparate_nodo_a = comparate_nodo_a->next;
		}
		if (ft_size_lis(*a) % 2 == 1)
			size = (ft_size_lis(*a) / 2) + 1;
		else
			size = ft_size_lis(*a) / 2;
		if (posicion > size)
			while ((*a)->value != nodo_a->value)
				rra;
		else
			while ((*a)->value != nodo_a->value)
				ra;
		pb;
	}
	while(*b)
	{
		pa;
	}
}

