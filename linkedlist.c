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
