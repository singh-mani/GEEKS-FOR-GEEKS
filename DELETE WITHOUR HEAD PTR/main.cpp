//https://practice.geeksforgeeks.org/viewSol.php?subId=11783699&pid=700161&user=Un_known


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list node
struct Node
{
    int data;
    Node* next;
}*/
// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
void deleteNode(Node *node)
{

   Node * temp=node->next;

   node->data=temp->data;
   node->next=temp->next;
}
