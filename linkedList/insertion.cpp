#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

Node* insertAtHead(int value, Node*& head, Node*& tail) {
    if (head == NULL && tail == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    return head;
}
Node* insertAtTail(int value, Node*& head, Node*& tail) {
    if (head == NULL && tail == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}
int getlength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertatposition(int position,int value,Node* &head,Node* &tail){
    int length = getlength(head);
    if(position == 1 ){
        head = insertAtHead(value,head,tail);
    }
    else if(position == length+1){
        head = insertAtTail(value,head,tail);
    }
    else{
        Node* temp = head;
        for(int i=0;i<position-2;i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int searchLL(int target,Node* head){
    int idx = 1;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return idx;
            // return true;
        }
        temp = temp->next;
        idx++;
    }
    // return false;
    return -1;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(10, head, tail);
    print(head); 
    insertAtHead(20, head, tail);
    print(head);
    insertAtHead(30, head, tail);
    print(head);
    insertAtHead(40, head, tail);
    print(head);
    // insertAtTail(10, head, tail);
    // print(head);
    // insertAtTail(20, head, tail);
    // print(head);
    // insertAtTail(30, head, tail);
    // print(head);
    insertatposition(2, 20, head, tail);
    print(head);
    cout<<searchLL(20,head)<<endl;

    return 0;
}
