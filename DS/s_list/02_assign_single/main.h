#ifndef SLIST_H
#define SUCCESS 1       // defining macros
#define FAILURE 0
#define EMPTY 2

typedef struct Node    //defining the structure.
{      
	
	int data;
	struct Node* next;

}slist_t;

//all function prototypes.
int insert_first(slist_t**, int);
int insert_after(slist_t**, int, int);
int insert_before(slist_t**, int, int);
int delete_element(slist_t**, int);
int insert_nth_pos(slist_t**, int, int);
void print(slist_t*);

#endif
