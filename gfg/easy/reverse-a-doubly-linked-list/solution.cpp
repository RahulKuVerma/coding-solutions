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
          // Code here
    Node *temp =head;
    stack<int>st;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp = head;
    while(temp!=NULL){
        temp->data = st.top();
        st.pop();
        temp=temp->next;
    }
    return head;
    }
};