#ifndef DLIST_T
#define SUCCESS 1      //define macros
#define FAILURE 0
#define EMPTY 2

typedef struct Node    //define structure
{
	int data;
	struct Node* prev, *next;
}dlist_t;

//function prtotypes
int insert_first(dlist_t**, int);
int insert_after(dlist_t**, int, int);
int insert_before(dlist_t**, int, int);
int delete_element(dlist_t**, int);
int print(dlist_t*);

#endif

