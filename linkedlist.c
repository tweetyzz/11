#include <stdlib.h>
#include <stdio.h>

typedef struct linknd{
	
	int data;
	
	
	struct linknd *next;

}linknd_t;



//linknd_t nd;

 static linknd_t *list; //파일 내부에서만 사용할 전역 변수 
 
 linknd_t* create_node(int value){
 	linknd_t*ndptr;
 	
 	//동적 메모리 할당 & 정수값 저장 
	ndptr = (linknd_t*)malloc( sizeof(linknd_t)/*구조체의 크기*/);
	if(ndptr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	
	ndptr->data =value;
	
	ndptr->next =NULL; //초기화 
 	
 	
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
 
 

 
 
