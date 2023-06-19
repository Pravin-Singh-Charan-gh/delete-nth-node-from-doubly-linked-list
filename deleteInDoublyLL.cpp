Node* deleteNode(Node *head, int x)
    { 
    if(x==1){
    Node*temp=head;
    head=head->next;
    head->prev=NULL;
    delete(temp);
    return head;
    }
    Node*curr=head;
    for(int i=1;i<x;i++){
    if(curr->next==NULL){
          return head;
          break;
    }
      curr=curr->next;
    }
    Node*temp=curr;
    if(curr->next!=NULL)
    curr->next->prev=curr->prev;
    curr->prev->next=curr->next;
    delete(curr);
    return head;
    }
