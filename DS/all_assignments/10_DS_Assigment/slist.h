

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define EMPTYLIST -2
#define NOELEMENT -3

typedef int data_t;
typedef struct snode
{
	data_t data;
	struct snode *link;
}SLink;

/* prints the elements in the list
 */
void print_list(SLink *);


/* Merge list a with list b in sorted fashion and return
 */
SLink * merge_sortedlinks(SLink *ahead, SLink *bhead);

int insert_at_last(SLink **head, data_t data);
int insert_before(SLink **head, data_t b_data, data_t n_data);
int insert_sort(SLink **head);
int sorted_insert(SLink **head, data_t data);
