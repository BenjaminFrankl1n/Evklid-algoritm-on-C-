#include<iostream>
using namespace std;

int Evklid(const int a, const int b)
{
	int NOD = 0;
	int ost = 0;
	int A = a;
	int B = b;
	if (a == b)
	{
		return a;
	}
	if (A < B)
	{
		swap(A, B);
	}
	ost = A % B;
	A = ost;
	NOD = ost;
	while (ost > 0)
	{
		if (A < B)
		{
			swap(A, B);
		}
		ost = A % B;
		if (ost != 0)
			NOD = ost;
		else
			return NOD;
		A = ost;

	}

	return ost;
}

int main()
{
	setlocale(LC_ALL, "RU");
	while (true)
	{
	int a = 0;
	int b = 0;
	cout << "Введите первое число:\n";
	cin >> a;
	cout << "Введите второе число:\n";
	cin >> b;
	int NOD = Evklid(a, b);
	cout << "НОД = " << NOD << endl;
	}
}