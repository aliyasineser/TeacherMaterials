#ifndef LINKEDLIST
#define LINKEDLIST

#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
}node_t;

int add_list(node_t *head,int data);


#endif
