#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

class linked_list
{
public:
	ll data;
	linked_list *next;
	linked_list();
	linked_list(ll data);
	linked_list *add(ll data, linked_list *head);
	void print(linked_list *head);
};

#endif
