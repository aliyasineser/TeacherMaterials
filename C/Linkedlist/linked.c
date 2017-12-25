#include "linked.h"



int add_list(node_t *head,int data){
	node_t *temp;

	if(head == NULL){
		head = (node_t*)malloc(sizeof(node_t));
		head->data = data;
		head->next = NULL;
		return 0;	
	}

	temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = (node_t*)malloc(sizeof(node_t));
	temp->next.data = data;
	temp->next.next = NULL;
	return 0;

}

