#include "main.h"
/**
 * linkedpath - pointer to linked list
 * @b: pointer to string of path
 * Return: linked list
 */
lol *linkedpath(char **b)
{
	lol *linked = malloc(sizeof(lol));
	int i = 0;

	while (b[i] && linked)
	{
		add_node_end(&linked, b[i]);
		i++;
	}
	return (linked);
}
/**
 * add_node_end - add a node in the end
 * @head: pointer to the first node
 * @a: pointer to struct
 * Return: first node
 */
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
/**
 * print_list - print the linked list
 * @h: pointer to the struct
 */
void print_list(const lol *h)
{
	if (!h)
		exit(-1);
	if (h->a == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", h->a);
	if (h->next)
		print_list(h->next);

}
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	print_list(linkedpath(printpath(_getenv("PATH"))));

	return (0);
}
