#include <stdio.h>
#include <ctype.h>
char doiKytu(char c);

main()
{
	char c;
	printf("Nhap vao 1 ky tu: ");
	scanf("%c", &c);

	char ketqua = doiKytu(c); //Khai báo biến và gán giá trị trả về (đối số là giá trị của biến c)
	printf("Ky tu sau khi doi: %c", ketqua);
}

char doiKytu(char c)
{
	if (islower(c)) //Nếu chữ thường 
	{
		return toupper(c); //Trả về chữ hoa
	}
	if (isupper(c)) //Nếu chữ hoa 
	{
		return tolower(c); //Trả về chữ thường
	}
	return c; //Trả về tham số 
}