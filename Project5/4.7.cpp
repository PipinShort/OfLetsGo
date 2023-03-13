#include <iostream>
using namespace std;

int main() 
{
	float p, s=1000;
	int k = 1;
	cout << "P:";
	cin >> p;
	while(s<=1100)
	{
		++k;
		s += s * p / 100;
	}
	cout << "k=" << k << "  s=" << s;
}