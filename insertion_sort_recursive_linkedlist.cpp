#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data) {
        this-> data = data;
        next = NULL;
    }

};

void insertHead(node* &head, int data) {
    node* n = new node(data);
    n->next = head;
    head = n;
}

void insert(node * &head, int data) {
    node* n = new node(data);
    node* temp = head;
    while (temp-> next != NULL) {
        temp = temp-> next;
    }
    temp->next = n;
    n-> next = NULL;

}

void print(node* &head) {

    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp-> next;
    }

}

//Insertion Sort
void sorted(node* &head2, node* current) {
    node* temp;
    if (head2 == NULL || head2->data > current->data) {
        current->next = head2;
        head2 = current;
    }
    else {
        temp = head2;
        while (temp->next != NULL && temp->next->data < current->data) {
            temp = temp->next;
        }
        current->next = temp->next;
        temp->next = current;
    }
}

void insertionSort(node* & head) {
    node* nextNode = head;
    node* new_head = NULL;
    node* current = nextNode;
    while (current != NULL) {
        if(nextNode != NULL)
        nextNode = nextNode->next;
        sorted(new_head, current);
        current = nextNode;
    }
    head = new_head;
}

int main() {
    int n;
    cin >> n;
    int a;
    node *head1 = NULL;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (i == 0)
            insertHead(head1, a);
        else
            insert(head1, a);
    }

    insertionSort(head1);
    print(head1);

    return 0;

}
