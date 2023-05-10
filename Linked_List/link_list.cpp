#include "linked_list.h"

linked_list::linked_list()
{
  this->next = NULL;
}

linked_list::linked_list(ll data)
{
  this->data = data;
  this->next = NULL;
}

linked_list *linked_list::add(ll data, linked_list *head)
{
  // CASE:1
  if (head == NULL)
  {
    linked_list *temp = new linked_list(data);
    head = temp;
  }
  else
  {
    // CASE:2
    linked_list *temp = head;
    while (temp->next != NULL)
      temp = temp->next;
    temp->next = new linked_list(data);
  }
  return head;
}

void linked_list::print(linked_list *head)
{
  auto temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
