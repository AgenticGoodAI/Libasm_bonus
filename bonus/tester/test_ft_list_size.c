#include "header.h"


t_list *create_list(int size){
	if (size <= 0)
		return (NULL);
	t_list *head = malloc(sizeof(t_list));
	int *val = malloc(sizeof(int));
	* val = 0;
	head->data = val;
	t_list *tmp = head;
	int i = 1;
	while(i < size){
		printf("Added %i items to the list, address %p\n", *(int *)tmp->data, tmp);
		t_list *next = malloc(sizeof(t_list));
		int * new_val = malloc(sizeof(int));
		*new_val = i;
		next->data = new_val;
		next->next = NULL;
		tmp->next = next;
		tmp = next;
		i++;
	}
	printf("Added %i items to the list, address %p\n", *(int *)tmp->data, tmp);

	return (head);
}

void	list_printer(t_list *head){
	t_list *count_me = head;
	printf("\n\n");
	while (count_me != NULL)
	{
		printf("count_me->data = %i, address %p\n", *(int *)count_me->data, count_me);
		count_me = count_me->next;
	}

}

void test_list_size(char **argv)
{
	/*
	t_list *head;
	head = malloc(sizeof(t_list) * 1);
	if (head == NULL)
		printf("Malloc failed\n");
	else
		printf("Malloc success\n");
	int * a = malloc (sizeof(int) * 1);
	*a = 10;
	head->data = a;
	
	head->next = NULL;
	*/
	int size = atoi(argv[1]);
	t_list *head = create_list(size); 
	list_printer(head);
	int list_size = ft_list_size(head);
	printf("\n\nList size %i\nIt should be %i\n", list_size, size);
	if (list_size == size)
		printf("ft_list_size success :)\n");
	else
		printf("ft_list_size failed :(\n");
}