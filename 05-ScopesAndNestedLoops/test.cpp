#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int m, n;

	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		for (int j = m; j <= n; j++)
		{
			for (int h = m; h <= n; h++)
			{
				if (i < j + h && j < i + h && h < i + h) {
					cout << "(" << i << "," << j << "," << h << ")" << endl;
				}
			}
			
		}
	}

}
