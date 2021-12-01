#include "main.h"
/**
 * linkedpath - pointer to linked list
 * @b: pointer to string of path
 * Return: linked list
 */
lol *linkedpath(char **b)
{
	lol *linked;
	int i = 0;

	linked = NULL;
	linked = malloc(sizeof(lol));
	
	while (b[i] && linked)
	{
		add_node_end(&linked, b[i]);
		i++;
	}
	delete_nodeint_at_index(&linked, 0);
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
int delete_nodeint_at_index(lol **head, unsigned int index)
{
	unsigned int count = 0;
	lol *tmp, *sig;

	if (head && *head)
	{
		tmp = *head;
		if (index > 0)
		{
			if (tmp->next == NULL)
				return (-1);
			while (tmp)
			{
				if (index - 1 == count)
				{
					sig = tmp->next->next;
					free(tmp->next);
					tmp->next = sig;
					return (1);
				}
				count++;
				tmp = tmp->next;
			}
		}
		else
		{
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		return (1);
	}
		return (-1);
	return (-1);
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
