#ifndef FUN9_H
#define FUN9_H
#include <iostream>
#include <cstdlib>
using namespace std;

class Property {
protected:
	int worth;
public:
	Property(double propertyWorth) :worth(propertyWorth) {}
	virtual double tax() = 0;
	virtual void put_the_worth(double worth1) { this->worth = worth1; }
	virtual double retrn_the_worth() { return this->worth; }
};

class Apartment : public Property {
public:
	Apartment(double apartmentWorth) :Property(apartmentWorth) {}
	double tax() { return 0.001 * worth; }
};
class Car : public Property {
public:
	Car(double carWorth) :Property(carWorth) {}
	double tax() { return 0.005 * worth; }
};
class CountryHouse : public Property {
public:
	CountryHouse(double countryHouseWorth) :Property(countryHouseWorth) {}
	double tax() { return 0.002 * worth; }
};
void fill_the_cost_of_property_random(Property** arr, unsigned n);
#endif