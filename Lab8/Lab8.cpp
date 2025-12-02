#include <iostream>
using namespace std;

int main() {



	return 0;
}

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
