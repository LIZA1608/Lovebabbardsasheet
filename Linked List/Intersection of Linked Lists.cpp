/*https://www.codingninjas.com/codestudio/problems/intersection-of-linked-lists_3210610?topList=love-babbar-dsa-sheet-problems*/

/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/
  Node* intersect_ll(Node* L1, Node *L2)
{
   Node* temp1 = L1;
   Node* temp2 = L2;
   
   Node* newNode = new Node(-1);
   Node* ans = newNode;
   
   while(temp1!=NULL && temp2!=NULL){ 
       if (temp1->data == temp2->data){
           newNode->next = new Node(temp1->data);
           newNode = newNode->next;
           temp1 = temp1->next;
           temp2 = temp2->next;
       }       
       else if (temp1->data > temp2->data){
           temp2 = temp2->next;
       }      
       else{
           temp1 = temp1->next;
       }
   }  
   return ans->next;   
}

