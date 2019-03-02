//https://practice.geeksforgeeks.org/viewSol.php?subId=11914735&pid=700163&user=Un_known

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{

    Node* trav=head1;

    while(trav!=NULL) {trav->data=-trav->data; trav=trav->next;}

    trav=head2;

    while(trav!=NULL)
    {
        if(trav->data<0) return -trav->data;;

        trav=trav->next;


    }

    return -1;

}
