#include <iostream>
using namespace std;


class Node{
public:
    int data;
    Node* next;
};
void swapNodes(Node** head_ref, int x, int y){
    if(x==y)
      return;
    
    Node *prevX = NULL , *currX= *head_ref;
    while (currX && currX->data!= x){
        prevX = currX;
        currX = currX->next;
    } 
    Node *prevY =NULL, *currY= *head_ref;
    while(currY && currY->data != y){
         prevY = currY;
         currY = currY->next;
    }

    if(currX == NULL || currY == NULL){
        return;
    }

    if(prevX!=NULL){
        prevX->next = currY;
    }
    else{
        *head_ref = currX;
    }

    Node* temp= currY->next;
    currY->next= currX->next;
    currX->next= temp;
}