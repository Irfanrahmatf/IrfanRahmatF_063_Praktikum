//Membuat Program Tabel Perkalian 1 Sampai 10

#include <iostream>
using namespace std;

int main()
{
	
	cout << " Tabel Perkalian 1-10 \n\n";
	
	
	for (int i = 1; i <=10; i++)
	{
		
		for (int j = 1; j<=10; j++)
		{
			cout << " " << i * j << "\t ";
		}
		
		cout << endl << endl;
	}
	
}
