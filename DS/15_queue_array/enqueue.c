#include "main.h"

int enqueue(Q_array *Q, data_t data) 
{	
	//Validation to check if the queue is full or not
	if (Q->rear == SIZE - 1)
	{
		return QUEUE_FULL;
	}
	
	//Incrementing the Q->front so that the 0th location of the array could be accessed
	if (Q->front == -1)
	{
		(Q->front)++;
	}
	//Incrementing the Q->rear so that the 0th loctaion could be accessed
	(Q->rear)++;
	//Inserting the data into the array
	Q->data[(Q->rear)] = data;
	return SUCCESS;
}

