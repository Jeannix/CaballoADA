#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void pasoCaballo(int n)
{
	//var auxiliares:
	int i, j;
	vector < pair<int, int> > tablero(n);
	int q;
	int s;
	vector < pair< pair<int, int >, bool> > movimiento(8);// caballo movimientos

	int horiz[8] = { 2,1,-1,-2,-2,-1,1,2 };
	int verti[8] = { 1,2,2,1,-1,-2,-2,-1 };

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			movimiento[i] = make_pair(make_pair(i,j), 0);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			movimiento[i] = make_pair(make_pair(i, j), 0);
		}
	}

  
}

int main() 
{

	pasoCaballo(5);
	
	return 0;
}