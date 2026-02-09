// #include <stack>

// char *push_swap(char *numeros)
// {
// 	stack a;
// 	stack b;
	
// }


#include <stdio.h>
#include <stdlib.h>

char *seur_extrem(char *numbers)
{
	char	*line_numbers;
	int		comillas;
	int		i;
	int		j;

	j = 0;
	i = 0;
	comillas = 0;

	while(numbers[i])	//largo cadena malloc, emepezamos con básico, esppacios y números, faltan comprobaciones con doble comilla, un numero entre doble comilla, sino reTurn "ERROR"
	{
		while(numbers[i] == ' ')
			i++;
		if (numbers[i] >= '0' && numbers[i] <= '9')
        {
            if (j > 0)
                j++;
            while (numbers[i] >= '0' && numbers[i] <= '9')
            {
                j++;
                i++;
            }
        }
        // else if (numbers[i])
            // i++;
    }
	line_numbers = malloc(sizeof(char) *(j + 1));
	if (!line_numbers)
		return (NULL);

	i = 0;
	j = 0;
	while(numbers[i])	//agregar datos
	{
		while(numbers[i] == ' ')
			i++;
		if (numbers[i] >= '0' && numbers[i] <= '9')
        {
            if (j > 0)
                line_numbers[j++] = ' ';
            
            while (numbers[i] >= '0' && numbers[i] <= '9')
                line_numbers[j++] = numbers[i++];
        }
        else if (numbers[i])
            i++;
    }
    line_numbers[j] = '\0';
    return (line_numbers);
}

int main(void)
{
    char *input = " 8 24       5    10";
    char *result;

    result = seur_extrem(input);

    if (result)
    {
        printf("Entrada: \"%s\"\n", input);
        printf("Resultado: \"%s\"\n", result);
        free(result); // ¡Importante liberar la memoria!
    }
    return (0);
}

//cc push_swap.c && ./a.out