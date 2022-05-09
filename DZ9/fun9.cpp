#include "fun9.h"
void fill_the_cost_of_property_random(Property** arr, unsigned n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i]->put_the_worth((rand() % 10000 + 500000) * 0.3);
		cout << arr[i]->retrn_the_worth() << " ";
	}
}