/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
       if(head==NULL || head->next==NULL){
           return head;
       } 
       Node * last=NULL, *current=head;
       while(current!=NULL){
           last=current->prev;
           current->prev =current->next;
           current->next =last;
           current =current->prev;
       }
       return (last->prev);
    }
};