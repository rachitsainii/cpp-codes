#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>

using namespace std;

void printMaxActivities(int s[], int f[], int n) 
{ 
	int i, j; 

	cout<<"activities to be selected are: "; 

	i = 0; 
	cout<< i<<" "; 

	for (j = 1; j < n; j++) 
	{ 
	
	if (s[j] >= f[i]) 
	{ 
		cout<<j<<" "; 
		i = j; 
	} 
	} 
} 

int main() 
{ 
    
	int s[] = {1,3,0,5,3,5,6,8,8,2,12}; 
	int f[] = {4,5,6,7,8,9,10,11,12,13,14}; 
	int n = sizeof(s)/sizeof(s[0]); 
	for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(f[i]>f[j])
      {
        swap(f[i],f[j]);
        swap(s[i],s[j]);
      }
    }
  }
	printMaxActivities(s, f, n); 
	return 0; 
} 
