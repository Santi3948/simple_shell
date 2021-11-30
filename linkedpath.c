#include "main.h"

lol *linkedpath(char **b)
{
	lol *linked = malloc(sizeof(lol));
	int i = 0;
	
	while (b[i] && linked)
	{
		add_node_end(&linked, b[i]);
		i++;
	}
	return(linked);
}
lol *add_node_end(lol **head, const char *a)
{
	lol *new;
	lol *aux;

	new = malloc(sizeof(lol));
	if (new == NULL)
	{
		return (NULL);
	}
	new->a = strdup(a);
	if (new->a == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		aux = *head;
	while (aux->next)
		aux = aux->next;
	aux->next = new;
	}
	return (*head);
}

int main(void)
{
	linkedpath(printpath(_getenv("PATH")));

	return (0);
}
