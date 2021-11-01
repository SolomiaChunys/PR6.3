#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int *a, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[i] = "; cin >> a[i];
	}
}

void Print(int *a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Sum(int *a, const int n) 
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if(a[i] > 0)
		s += a[i];
	return s;
}
int main()
{
	int n;
	cout << "n = ";cin >> n;
	int* a = new int[n];

	Create(a, n);
	Print(a, n);

	cout << "S = " << Sum(a, n) << endl;
	return 0;
}