#include <bits/stdc++.h>
using namespace std;
#define str string

int main()
{
	str s;
	char c;

	cout << "s = ";
	getline(cin, s);
	cout << "c = ";
	cin >> c;

	int count = 0;
	for (char ch : s)
	{
		if (ch == c)
			count++;
	}

	return 0;
}