#include <iostream>
#include <string>
using namespace std;

class Vehicle{
private:
	double mileage;
	double price;
	
public:
	Vehicle()
	{
	    
	}

	Vehicle(double mileage,double price)
	{
		this->mileage = mileage;
		this->price = price;
	}

	double getMileage()
	{
		return this->mileage;
	}
	
	double getPrice()
	{
		return this->price;
	}

	virtual void display()
	{
		cout<<"Mileage: "<< mileage << endl;
		cout<<"Price: "<< price << endl;
	}
};

class Car : public Vehicle
{
private:
	double ownershipCost;
	int warranty;
	int seatingCapacity;
	string fuelType;
public:
	Car()
	{
	    
	}

	Car(double mileage,double price,double ownershipCost,int warranty,int seatingCapacity,string fuelType) : Vehicle(mileage,price)
	{
		this->ownershipCost=ownershipCost;
		this->warranty=warranty;
		this->seatingCapacity=seatingCapacity;
		this->fuelType=fuelType;
	}


	double getOwnershipCost()
	{
		return this->ownershipCost;
	}
	
	int getWarranty()
	{
		return this->warranty;
	}
	
	int getSeatingCapacity()
	{
		return this->seatingCapacity;
	}
	
	string getFuelType()
	{
		return this->fuelType;
	}
	void display()
	{
		cout<<"Car" << endl;
		Vehicle::display();
		cout<<"Ownership Cost: "<<ownershipCost << endl;
		cout<<"Warranty: "<<warranty<<endl;
		cout<<"Seating capacity: "<<seatingCapacity<<endl;
		cout<<"Fuel type: "<<fuelType<<endl;
	}
};

class Bike : public Vehicle
{
private:
	int numberCylinders;
	int numberGears;
	string coolingType;
public:
	Bike(){}
	Bike(double mileage,double price,int numberCylinders,int numberGears,string coolingType):Vehicle(mileage,price){
		this->numberCylinders=numberCylinders;
		this->numberGears=numberGears;
		this->coolingType=coolingType;
	}

	int getNumberCylinders()
	{
		return this->numberCylinders;
	}
	
	int getNumberGears()
	{
		return this->numberGears;
	}
	
	string getCoolingType()
	{
		return this->coolingType;
	}
	
	void display()
	{
		cout<<"Bike" << endl;
		Vehicle::display();
		cout<<"Number cylinders: "<<numberCylinders<<endl;
		cout<<"Number gears: "<<numberGears<<endl;
	}
};


int main()
{
	Car c(40000,48000,32000,5,5,"diesel");
    Bike b(56000,52000,6,6,"liquid");
	c.display();
	cout << endl;
	b.display();
    return 0;
}