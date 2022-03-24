#include "libft/libft.h"
#include <unistd.h> //write

typedef struct node 
{
	int		value;
	struct 	node* next;
}	node_t;