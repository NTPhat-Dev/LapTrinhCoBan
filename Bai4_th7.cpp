#include <bits/stdc++.h>
using namespace std;
#define str string

str bienchuhoa(str s);
str bienchuthuong(str s);
str xoatrong(str s);
str yc4(str s);

int main()
{
    str s;

    cout << "Nhap chuoi: ";
    getline(cin, s);

    str thanhhoa = bienchuhoa(s);
    cout << "Chuoi sau khi doi thanh chu hoa: " << thanhhoa << endl;

    str thanhthuong = bienchuthuong(s);
    cout << "Chuoi sau khi doi thanh chu thuong: " << thanhthuong << endl;

    str tmp = xoatrong(s);
    cout << "Chuoi sau khi xoa khoang trang thua: " << tmp << endl;

    str c4 = yc4(s);
    cout << "Chuoi sau khi chu hoa chu dau cua moi tu: " << c4 << endl;

    return 0;
}

str bienchuhoa(str s)
{
    for (char &c : s)
    {
        c = toupper(c);
    }
    return s;
}

str bienchuthuong(str s)
{
    for (char &c : s)
    {
        c = tolower(c);
    }
    return s;
}

str xoatrong(str s)
{
    str kq;
    bool space = false;
    for (char c : s)
    {
        if (!isspace(c))
        {
            kq += c;
            space = false;
        }
        else
        {
            if (!space)
            {
                kq += " ";
                space = true;
            }
        }
    }
    kq.erase(remove_if(kq.begin(), kq.end(), [](char c)
                       { return isspace(c); }),
             kq.end());
    return kq;
}

str yc4(str s)
{
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (i == 0 || isspace(s[i - 1]))
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}
