#include <iostream>
#include <time.h>   
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0)); 
	int kot1 = rand() % 15;
	cout << "kot1 = " << kot1 << "��." << endl;
	int kot2 = rand() % 15;
	cout << "kot2 = " << kot2 << "��" << endl;
	if (kot1 > 5)
		cout << "Warning! ��������!!" << endl;
	if (kot2 > 5) 
		cout << "Warning! ��������!!" << endl;
}
