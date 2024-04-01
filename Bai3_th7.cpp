#include <bits/stdc++.h>
using namespace std;

int main()
{
	string ten1, ten2;

	cout << "Ten nguoi 1 ";
	getline(cin, ten1);
	cout << "Ten nguoi 2 ";
	getline(cin, ten2);

	if (ten1 == ten2)
	{
		cout << "Ten 2 nguoi giong nhau";
	}
	else
	{
		cout << "Ten 2 nguoi khong giong nhau";
	}

	return 0;
}