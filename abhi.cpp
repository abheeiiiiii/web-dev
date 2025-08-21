#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    
};

/*int isEmpty(struct stack *ptr)
    if(ptr->size == -1)
    {
        return 1;
    
    }
    else {
        return 0;
    }
}


int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}*/



int main() {
   struct node *HEAD;
    struct node *FIRST;
     struct node *SECOND;
      struct node *TAIL;

      HEAD=(struct node*)malloc(sizeof(struct node));
      FIRST=(struct node*)malloc(sizeof(struct node));
      SECOND=(struct node*)malloc(sizeof(struct node));
      TAIL=(struct node*)malloc(sizeof(struct node));
   
  HEAD->data=4;
HEAD->next=FIRST;

   FIRST->data=5;
   FIRST->next=SECOND;

   SECOND->data=6;
   SECOND->next=TAIL;


   TAIL->data=7;
   TAIL->next=NULL;

   printf("." ,*HEAD);
   printf("." ,*FIRST);
   printf("." ,*SECOND);
   printf("." ,*TAIL);


/*if(isEmpty(S))
{
    printf("stack is empty");

}

else{
    printf("stack is not empty");
}
*/

    return 0;
}
