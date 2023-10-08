#include <bits/stdc++.h>
using namespace std;

class SingleLLNode {
public:
  int data;
  SingleLLNode *next;

  SingleLLNode() {}

  SingleLLNode(int data) {
    this->data = data;
    this->next = NULL;
  }
};

SingleLLNode *insertAtHead(SingleLLNode *head, int x) {
  SingleLLNode *n = new SingleLLNode(x);
  if (head == NULL) {
    n->next = NULL;
    head = n;
  } else {
    n->next = head;
    head = n;
  }
  return head;
}

SingleLLNode *insertAtEnd(SingleLLNode *head, int x) {
  SingleLLNode *n = new SingleLLNode(x);
  if (head == NULL) {
    n->next = NULL;
    head = n;
  } else {
    SingleLLNode *h = head;
    while (h->next != NULL) {
      h = h->next;
    }
    h->next = n;
    n->next = NULL;
  }

  return head;
}

SingleLLNode *insertInMiddle(SingleLLNode *head, int x, int position) {
  if (position == 0)
    return insertAtHead(head, x);
  else {
    SingleLLNode *h = head;
    int idx = 1;
    while (h->next != NULL and idx != position) {
      h = h->next;
      idx++;
    }
    SingleLLNode *n = new SingleLLNode(x);
    n->next = h->next;
    h->next = n;
  }
  return head;
}

SingleLLNode *deleteFromHead(SingleLLNode *head) {
  if (head != NULL) {
    SingleLLNode *temp = head;
    head = head->next;
    delete temp;
  }
  return head;
}

SingleLLNode *deleteFromEnd(SingleLLNode *head) {
  if (head->next == NULL) {
    head = NULL;
    return head;
  }

  if (head != NULL) {
    SingleLLNode *h = head;
    SingleLLNode *h_prev = NULL;

    while (h->next != NULL) {
      h_prev = h;
      h = h->next;
    }
    h_prev->next = NULL;
    delete h;
  }

  return head;
}

SingleLLNode *deleteFromMiddle(SingleLLNode *head, int position) {
  if (position == 0 and head != NULL)
    return deleteFromHead(head);
  else {
    SingleLLNode *h = head;
    SingleLLNode *h_prv = NULL;
    while (position and h->next != NULL) {
      h_prv = h;
      h = h->next;
      position--;
    }
    if (h_prv == NULL) {
      head = NULL;
    } else {
      h_prv->next = h->next;
    }
    delete h;

    return head;
  }
}

void print(SingleLLNode *head) {
  if (head == NULL) {
    cout << "Empty Linked List!" << endl;
    return;
  }
  SingleLLNode *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  SingleLLNode *head = new SingleLLNode(10);
  head = NULL;

  head = insertAtHead(head, 20);
  head = insertAtHead(head, 30);
  head = insertAtHead(head, 40);

  head = insertAtEnd(head, 50);
  head = insertAtEnd(head, 60);
  head = insertAtEnd(head, 70);

  head = insertInMiddle(head, 100, 0);

  head = insertInMiddle(head, 200, 1000);
  print(head);

  head = deleteFromHead(head);
  head = deleteFromHead(head);
  head = deleteFromMiddle(head, 10);

  print(head);

  return 0;
}
