#include <stdio.h>
#include <stdlib.h>
typedef struct myStruct{
	int num;
	struct myStruct *next;	
}Node;
Node* makeNode(int n){
	Node  *element;
	element =   (Node*) malloc(sizeof(Node));
	element->num = n;
	element->next = NULL;
	return element;
}

void printList(Node *top,int len){
	int sum=0;
	float avg=0.0;
	Node *head = top;
	while (head != NULL){    
	    printf("%d==>",head->num);
	    sum+=head->num;
	    head = head->next;
	}
	printf("\nThe sum of 25 numbers is: %d",sum);
	avg = (float)sum / len;
	printf("\nThe average of 25 numbers is %.2f",avg);
	
}
 main (){
	
	Node *head=NULL,*np,*last;
	int num;
	int length =25;
	int c;
	 for (c = 1; c <= length; c++) {
    num = rand() % 100 ;
 
    	np = makeNode(num);
    	if (head== NULL)
    	   head = np;
    	else
    		last->next = np; 
		last = np;  	
	}
	printf("The Random 25 numbers list is: \n");
	printList(head,length);
getchar();
}
