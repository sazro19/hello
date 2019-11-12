

#include "pch.h"
#include <iostream>
#include <vector>
#include "shell.h"
#include "LSD.h"


class rofl {
public:
	int a;
	rofl(int aa) {
		a = aa;
	}
	rofl& operator=(int v)
	{
		a = v;
		return *this;
	}
	rofl& operator=(rofl& v)
	{
		a = v.a;
		return *this;
	}
	friend rofl operator/(const rofl &d1, const int &d2);
	friend rofl operator%(const rofl &d1, const int &d2);
	operator int() const {
		return a;
	}
};
bool operator>(const rofl &aa, const rofl &bb) {
	return (aa.a > bb.a);
}
bool operator>(const rofl &aa, const int &bb) {
	return (aa.a > bb);
}
rofl operator/(const rofl &d1, const int &d2) {
	return int(d1.a / d2);
}
rofl operator%(const rofl &d1, const int &d2) {
	return int(d1.a % d2);
}

template <typename T>
void swapp(T &fir, T &sec) {
	T temp = fir;
	fir = sec;
	sec = temp;
}

template <typename C>
void print(C arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}


int main()
{
	rofl r[8] = { 5, 2 , 4 , 3, 1, 23, 10, 0 };
	int n = 5;
	unsigned int arr[5] = { 7, 5 ,0, 3 ,4 };
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	shell(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl << endl;
	char ar[5] = "bacd";
	for (int i = 0; i < n; i++)
		cout << ar[i] << " ";
	cout << endl;
	shell(ar, n);
	for (int i = 1; i < n; i++)
		cout << ar[i] << " ";
	cout << endl << endl;
	vector<int> aa; 
	for (int i = 0; i < 4; i++) {
		int temp;
		cout << "enter vec" << endl;
		cin >> temp;
		aa.push_back(temp);
	}
	for (int i = 0; i < 4; i++)
		cout << aa[i] << " ";
	cout << endl;
	shell(aa, 4);
	for (int i = 0; i < 4; i++)
		cout << aa[i] << " ";
	cout << endl << endl;
	for (int i = 0; i < 8; i++)
		cout << r[i].a << " ";
	cout << endl;
	shell(r, 8);
	for (int i = 0; i < 8; i++)
		cout << r[i].a << " ";
	cout << endl << endl;
	cout << "-------------------" << endl;
	int rra[5] = { 8,5,6,4,3 };
	for (int i = 0; i < 4; i++)
		cout << rra[i] << " ";
	cout << endl;
	radixsort(rra, 5);
	for (int i = 0; i < 4; i++)
		cout << rra[i] << " ";
	cout << endl << endl;

	aa.clear();
	for (int i = 0; i < 4; i++) {
		int temp;
		cout << "enter vec" << endl;
		cin >> temp;
		aa.push_back(temp);
	}
	for (int i = 0; i < 4; i++)
		cout << aa[i] << " ";
	cout << endl;
	radixsort(aa, 4);
	for (int i = 0; i < 4; i++)
		cout << aa[i] << " ";
	cout << endl << endl;
	rofl rr[6] = { 100, 2 , 7 , 3, 11, 12 };
	for (int i = 0; i < 6; i++)
		cout << rr[i].a << " ";
	cout << endl;
	radixsort(rr, 6);
	for (int i = 0; i < 6; i++)
		cout << rr[i].a << " ";
	cout << endl << endl;



	

}

