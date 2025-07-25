#include <iostream>
using namespace std;

int main()
{
	int arr[101], N,V;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	cin >> V;

	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == V)
			count++;
	}

	cout << count << endl;
	return 0;

}