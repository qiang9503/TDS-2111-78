#include<iostream>

using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:

    LinkedList(){
        head = tail = NULL;
    }


    void addNodeAtPos(int x, int pos)
{
  Node* prev = new Node();
  Node* curr = new Node();
  Node* newNode = new Node();
  newNode->x = x;

  int tempPos = 0;   // Traverses through the list

  curr = head;      // Initialize current to head;
  if(head != NULL)
  {
    while(curr->next != NULL && tempPos != pos)
    {
        prev = curr;
        curr = curr->next;
        tempPos++;
    }
    if(pos==0)
    {
       cout << "Adding at Head! " << endl;
       addValue(x);
    }
    else if(curr->next == NULL && pos == tempPos+1)
    {
      cout << "Adding at Tail! " << endl;
      addBack(x);
    }
    else if(pos > tempPos+1)
      cout << " Position is out of bounds " << endl;
    else
    {
        prev->next = newNode;
        newNode->next = curr;
        cout << "Node added at position: " << pos << endl;
    }
 }
 else
 {
    head = newNode;
    newNode->next=NULL;
    cout << "Added at head as list is empty! " << endl;
 }
}
   void delNodeAtPos(int pos)
{
  int x;
  Node* prev = new Node();
  Node* curr = new Node();
  Node* newNode = new Node();
  newNode->x = x;

  int tempPos = 0;   // Traverses through the list

  curr = head;      // Initialize current to head;
    while(curr->next != NULL && tempPos != pos)
    {
        prev = curr;
        curr = curr->next;
        tempPos++;
    }
    if(pos==0)
    {
       cout << "Delete the Head! " << endl;
       delFirst();

    }
    else if(curr->next == NULL && pos == tempPos+1)
    {
      cout << "Delete the Tail! " << endl;
      delnth(4);
    }
    else if(pos > tempPos+1)
      cout << " Position is out of bounds " << endl;
    else
    {
        delnth(pos);
    }

}

    void addValue(int val)
    {
        Node *n = new Node();   // create new Node
        n->x = val;             // set value
        n->next = head;         // make the node point to the next node.
                                //  If the list is empty, this is NULL, so the end of the list --> OK
        head = n;               // last but not least, make the head point at the new node.
    }
    void addBack(int val) // After using this function, popAll() went wrong and wont show correct values.
    {
       Node* n = new Node; //create new node
       n->x = val;  //input data
       n->next = NULL;     //set node to point to NULL
       if ( tail == NULL )
       {
          head = n;
       }
       else
       {
          tail->next = n;
       }
       tail = n;
    }
    int popAll()
    {
        Node *n=head;
        while(n!=NULL)
    {
        cout<<n->x;
        n=n->next;
    }
    }

    int popValue(){

        Node *n = head;

        int ret = n->x;
        return ret;
        head = head->next;
        delete n;

    }
    void delFirst()
    {
        struct Node *temp;

        temp = head;
        head = head->next;

        delete(temp);
        cout <<"The Element deleted Successfully";
    }
    void delnth(int n)
    {
        struct Node* temp1 = head;
        int i;
        for(i=0;i<n-2;i++)
            temp1 = temp1 -> next;
        struct Node* temp2 = temp1 ->next;
        temp1 -> next = temp2 -> next;
        delete(temp2);
    }
private:
    Node *head;
    Node *tail; // this is the private member variable. It is just a pointer to the first Node
};
