#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at a specific position
void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;

    if (position == 1) {
  new_node->next = *head;
  *head = new_node;
   printf("Element %d inserted at position %d.\n", data, position);
   return;
  }

  struct Node* temp = *head;
  for (int i = 1; temp != NULL && i < position - 1; i++) {
  temp = temp->next;
  }

  if (temp == NULL) {
  printf("Position out of range. Inserting element %d at the end.\n", data);
  insertEnd(head, data);
  } else {
  new_node->next = temp->next;
  temp->next = new_node;
  printf("Element %d inserted at position %d.\n", data, position);
  }
}
  //Function to delete from the beginning
  void deleteBeginning(struct Node** head)
  {
   if (*head==NULL)  {
   printf("List is empty,no node to delete.\n");
   return;
  }
  struct Node* temp=*head;
  // if the list contains only one node
  if(temp->next == NULL)  {
  printf("Element %d deleted from the end.\n",temp->data);
  free(temp);
  *head=NULL;
  return;
  }

  //Traverse till the second last node
  while(temp->next!=NULL && temp->next->next !=NULL)
  {
   temp=temp->next;
  }
