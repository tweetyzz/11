#include <stdlib.h>
#include <stdio.h>

typedef struct linknd{
	
	int data;
	
	
	struct linknd *next;

}linknd_t;



//linknd_t nd;

 static linknd_t *list; //���� ���ο����� ����� ���� ���� 
 
 linknd_t* create_node(int value){
 	linknd_t*ndptr;
 	
 	//���� �޸� �Ҵ� & ������ ���� 
	ndptr = (linknd_t*)malloc( sizeof(linknd_t)/*����ü�� ũ��*/);
	if(ndptr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	
	ndptr->data =value;
	
	ndptr->next =NULL; //�ʱ�ȭ 
 	
 	
 	return ndptr;
 	
 	
 }
 
 
 
 void addtail(int value)
 {
 	linknd_t *ndptr, *newptr;
 	
 	if (list == NULL)
 	 {
 	 	return;
	  }

 
    else
    {
    	ndptr = list;

    	while(ndptr->next != NULL){
    		ndptr = ndptr->next;
		}
		
    	newptr = create_node(value);
    	ndptr -> next = newptr;
	}
	
	//ptr->next
 
 }
 
 
 
 void genlist(void){
 	
	list = create_node(0);
	
	
	return;
 }
 
 void print_list(int n){
 	
 	linknd_t *ndptr;
    int i=0;
    
	ndptr = (linknd_t*)list->next;
	 
 	while(ndptr != NULL){
 		
 		i++;
 		if( i== n)
 		{
 			printf("%i-th value : %i\n", i, ndptr->data);
 			break;
		 }
		 
 		
 		ndptr=ndptr->next;
 		
	 }
 	
 }
 
 

 
 
