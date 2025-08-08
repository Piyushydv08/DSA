#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //Contructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d) {
    //insert at start
    if(pos==1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<pos-1) {
        temp=temp->next;
        cnt++;
    }

    //insert at end
    if(temp->next==NULL) {
        insertAtTail(tail, d);
        return;
    }

    //Insert in middle
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;


}

int main() {
    Node* node1 = new Node(10);
    cout << node1->data <<endl;
    cout << node1->next <<endl;

    //head pointed at node1;
    Node *head = node1;
    Node* tail = node1;
    print(head);

    //Insert at head
    insertAtHead(head, 20);
    print(head);

    insertAtHead(head, 30);
    print(head);


    print(head);

    //Insert at tail;
    insertAtTail(tail, 40);
    print(head);

    insertAtTail(tail, 50);
    print(head);

    //Insert at Position
    insertAtPosition(head, tail, 22, 3);
    print(head);

    insertAtPosition(head, tail, 23, 4);
    print(head);


    return 0;
}