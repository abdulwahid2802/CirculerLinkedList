#pragma once

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include <conio.h>

using namespace std;

class List
{
	typedef struct Node
	{
		int digit;
		Node *next;
	}*Nptr;

	Nptr head;
	Nptr tail;

	void createNode(int);
	void appendNode(Nptr &, Nptr &);
	void printNum();
	void reverse(char[]);

public:
	List():head(NULL){}
	void insert(int);
	void print()const;
	void add(char []);
	char atoi(char);
};
