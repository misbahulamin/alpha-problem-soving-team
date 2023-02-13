#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

	double a, temp;
	int result;
	double notes[12] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};
	cin >> a;
	cout << "NOTAS:" << endl;
	for (int i = 0; i < 6; i++)
	{
		result = a / notes[i];
		temp = a - (result * notes[i]);
		a = temp;
		cout << result <<" nota(s) de R$ " <<fixed<<setprecision(2)<<notes[i]<< endl;
	}
	cout << "MOEDAS:" << endl;
	for (int i = 6; i < 12; i++)
	{
		result = a / notes[i];
		temp = a - (result * notes[i]);
		a = temp;
		cout << result <<" moeda(s) de R$ " <<fixed<<setprecision(2)<<notes[i]<< endl;
	}

	return 0;
}