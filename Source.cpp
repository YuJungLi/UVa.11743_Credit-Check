#include <iostream>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int table[10] = { 0,2,4,6,8,1,3,5,7,9 };
	int n;
	cin >> n;
	while (n--)
	{
		int num, sum = 0;
		for (int i = 0; i < 4; i++)
		{
			cin >> num;
			sum += table[num / 1000];
			sum += table[num / 10 % 10];
			sum += num / 100 % 10;
			sum += num % 10;
		}
		if (sum % 10)
			cout << "Invalid" << endl;
		else
			cout << "Valid" << endl;
	}
	return 0;
}