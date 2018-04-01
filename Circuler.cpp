#include "Circuler.h"


void List::insert(int digit)
{
	createNode(digit);
}

void List::createNode(int digit)
{
	Nptr n = new Node();
	n->digit = digit;
	n->next = NULL;

	appendNode(head, n);
}

void List::appendNode(Nptr &Ptr, Nptr &n)
{
	if (Ptr)
	{
		tail->next = n;
		tail = n;
		n->next = head;
	}
	else
	{
		Ptr = n;
		n->next = head;
		tail = n;
	}
}

void List::print()const
{
	if (head)
	{
		Nptr curr = head;
		
		do
		{
			cout << curr->digit << " ";
			curr = curr->next;
		}while (curr != head);
	}
}

void List::add(char num1[])
{
	if (head)
	{
		Nptr curr = head;
		int i = strlen(num1) - 1;
		int n;
		int carry = 0;
		int temp;


		while (1)
		{
			if (i < 0)
			{
				n = 0;
			}
			else
				n = atoi(num1[i--]);

			temp = curr->digit + n + carry;

			if (temp > 9)
			{
				(curr->digit) = temp % 10;
				carry = temp / 10;
			}
			else
			{
				curr->digit = temp;
				carry = 0;
			}
			

			if (carry == 0 && i < 0)
				break;
			
			curr = curr->next;
		}
		printNum();
	}
	
}

void List::printNum()
{
	if (head)
	{
		char num[25];
		int i = 0;

		Nptr curr = head;
		do
		{
			num[i++] = curr->digit + '0';
			curr = curr -> next;
		} while (curr != head);

		num[i] = '\0';


		char num2[25];
		int k = 0;
		for (int i = strlen(num) - 1; i >= 0; i--)
		{
			num2[k++] = num[i];
		}
		num2[k] = '\0';
		cout << num2;
	}
}

char List::atoi(char c)
{
	return c - '0';
}
