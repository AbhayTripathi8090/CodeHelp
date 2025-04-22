#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};
void insertAtHead(int value, Node *&head, Node *&tail)
{
    // empty wala case
    if (head == NULL and tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    // non-empty wala case
    else
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void insertAtTail(int value, Node *&head, Node *&tail)
{
    // empty wala case
    if (head == NULL and tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    // non-empty wala case
    else
    {
        Node *newNode = new Node(value);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}
int getLen(Node* head){
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtPosition(int pos,int value, Node *&head, Node *&tail)
{
    int len = getLen(head);
   if(pos == 1){
    insertAtHead(value, head, tail);
   }
   else if(pos == len+1){
    insertAtTail(value, head, tail);
   }
   else{
    Node *newNode = new Node(value);
    Node *temp = head;
    for(int i=0;i<pos-2;i++){
        temp = temp->next;
    }
    Node* forward = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = forward;
    forward->prev = newNode;
   }
}
// searching in DLL
bool searchInDLL(Node* head,int target){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
// deletion on DLL
void deleteNodePos(int pos,Node* &head, Node* &tail) {
    int len = getLen(head);
    if(head == NULL && tail==NULL){
        cout<<"DLL is empty"<<endl;
    }
    else if(head == tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else if( pos == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else if(pos == len){
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else{
        Node* backward = head;
        for(int i=0;i<pos-2;i++){
            backward = backward->next;
        }
        Node* curr = backward->next;
        Node* forward = curr->next;
        backward->next = forward;
        forward->prev = backward;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void printReverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    // insertAtHead(10,head,tail);
    // insertAtHead(20,head,tail);
    // insertAtHead(30,head,tail);
    insertAtTail(10, head, tail);
    insertAtTail(20, head, tail);
    insertAtTail(30, head, tail);
    print(head);
    // printReverse(tail);
    insertAtPosition(2,345,head,tail);
    print(head);
    // cout<<searchInDLL(head,20);
    deleteNodePos(3,head,tail);
    print(head);
    return 0;
}