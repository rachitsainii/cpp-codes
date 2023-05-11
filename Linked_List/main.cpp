#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

int main()
{
	linked_list *head = NULL;
	head = head->add(1, head);
	head = head->add(2, head);
	head = head->add(3, head);
	head = head->add(4, head);
	head->print(head);
}
