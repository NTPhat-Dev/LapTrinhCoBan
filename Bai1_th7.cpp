#include <bits/stdc++.h>
using namespace std;
#define str string

str kytuthuK(const str& s, int k);

int main () {
	str s;
	int k;
	
	cout << "s = "; 
	getline(cin, s); 
	cout << "k = ";
	cin >> k;
	
	str xuly = kytuthuK(s, k);
	if (xuly != "") {
		cout<<"Ky tu thu "<< k << " trong chuoi s la "<<xuly;
	} else {
		cout<<"Khong co ky tu thu "<<k<<"trong chuoi s";
	}
	
	return 0;
}

str kytuthuK(const str& s, int k) {
	if (k >= 0 && k < s.length()) {
		return s.substr(k, 1);
	} else {
		return 0;
	}
}