#include <iostream>
#include <string>
using namespace std;
int main() {
	int i = 1;
	int j;
	cout << "enter a num: " << endl;
	cin >> j;
	while (i <= 10) {
		j = j+i;

		i++;

	}
	cout << j;
	return 0;
}
