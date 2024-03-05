#include <iostream>
using namespace std;

int main()
{
	const int n = 10;
	int arr[n];

	cout << "Set " << n << " your numbers in masive" << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int a;
	cout << "Set your value " << endl;
	cin >> a;
	
	int ind = -1;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == a)
		{
			ind = i;
			break;
		}
	}

	if (ind != -1)
	{
		cout << "Your value " << a << " in masive on position: " << ind << endl;
	}

	else
	{
		cout << "Your value " << a << " are not in masive " << endl;
	}
}