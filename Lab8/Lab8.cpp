#include <iostream>
using namespace std;

/*
void swap(int* a, int* b);

int main() {//zadanie 2.3 (strona 6)
	int a = 10;
	int b = 20;
	cout << a << endl;
	cout << b << endl;
	swap(&a, &b);
	cout << a << endl;
	cout << b << endl;

	return 0;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
*/

/*
int main() {//zadanie 2

	int jakas_tablica[10];
	int *wsk;
	wsk = &jakas_tablica[0];
	//wsk = jakas_tablica; //te dwie linijki sa rownowazne
	for (int i = 0; i < 10; i++) {
		cout << "Wartosc " << i+1 << " elementu tablicy jest rowna: " << *wsk <<endl;
		wsk++;
	}

	wsk -= 2;
	*wsk = 77;
	wsk = &jakas_tablica[0];

	for (int i = 0; i < 10; i++) {
		cout << "Wartosc " << i + 1 << " elementu tablicy jest rowna: " << *wsk << endl;
		wsk++;
	}


	return 0;
}
*/

/*
int main() {//zadanie 2.1 , 2.2 (strona 5)
	const int size = 3;
	int tab[size] = {3,2,4};
	int* tab_w[size];
	int* ptr;

	ptr = &tab[0];

	for(int i = 0; i < size; i++) {
		tab_w[i] = &tab[i];
		cout << i << " " << *tab_w[i] << endl;
	}
	for(int i = 0; i < size; i++) {
		cout << i << " " << *ptr << endl;
		ptr++;
	}


	return 0;
}
*/

/*
int main()//zadanie 1
{
	int x = 0;
	int* wsk;

	wsk = &x;

	cin >> *wsk;
	cout << "Wartosc x: " << *wsk << endl;

	return 0;
}
*/
