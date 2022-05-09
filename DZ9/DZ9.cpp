#include "fun9.h"
int main() {
	setlocale(0, "");
	Property* massive[7] = { new Apartment(0), new Apartment(0), new Apartment(0),
							 new Car(0), new Car(0), new CountryHouse(0),new CountryHouse(0) };
	fill_the_cost_of_property_random(massive, 7);
	cout << endl;
	for (int i = 0; i < 7; i++) {
		cout << massive[i]->tax() << endl;
		delete massive[i];
	}
}