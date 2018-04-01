#include "Circuler.h"


int main()
{
	char num[25];
	char num1[25];
	List list = List();


	cin >> num;
	cin >> num1;

	for (int i = strlen(num)-1; i >= 0; i--)
	{
		if (isdigit(num[i]))
		{
			list.insert((int)list.atoi(num[i]));
		}
		else
		{
			cout << "Wrong intput";
			exit(1);
		}
	}

	list.add(num1);

	//list.print();

	_getch();
	return 0;
}


