//============================================================================
// Name        : CodeSignal.cpp
// Author      : Patryk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

vector<int> a { 2, 1, 3, 5, 3, 2 };

struct number {

	int place;
	int value;

};

int firstDuplicate(vector<int> a) {

	number first;

	first.value = -1;
	first.place = 0;
	int b;
	for (long unsigned int x = 0; x < a.size(); x++) {
		for (long unsigned int y = 1; y < a.size(); y++) {

			if (a[x] == a[y]) {
				if (first.place > y) {
					b = a[x];
					b = a[y];
				}
			}

		}

	}

	return b;

}

int main() {
	firstDuplicate(a);
	cout << firstDuplicate(a) << endl; // prints !!!Hello World!!!
	return 0;
}
