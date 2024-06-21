class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        Node* ahead=head;
        while(k!=0){
            if(ahead==NULL)
                return -1;
            ahead=ahead->next;
            k--;
        }
        Node* curr=head;
        
        while(ahead!=NULL){
            curr=curr->next;
            ahead=ahead->next;
        }
        
        if(curr==NULL)
                return -1;
        else
                return (curr->data);
    }
