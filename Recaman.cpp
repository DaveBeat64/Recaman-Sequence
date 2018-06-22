#include <iostream>
using namespace std;
int main() {
	int *v, n;
	bool notBack = false;
	cout << "Recaman Sequence Calculator" << endl << "Input the number n of terms to calculate" << endl;
	do cin >> n;
	while (n < 1);
	v = new int[n];
	for (int i = 0; i < n; i++) {
		if (i = 0) v[i] = 0;
		else {
			v[i] = v[i - 1] - i;
			for (int j = 0; j < i; j++) {
				if (v[j] == v[i] || v[i] < 0) {
					notBack = true;
					break;
				}
			}
			if (notBack) {
				v[i] = v[i - 1] + i;
				notBack = false;
			}
			cout << v[i] << " ";
		}
	}
	system("pause");
	delete[] v;
	return 1;
}