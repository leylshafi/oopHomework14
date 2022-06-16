#pragma once
//Hierarcal
class Vehicle
{
public:
	string year;
	size_t fuelAmount;
	size_t capacity;
	double enigne;
	Vehicle() = default;

	Vehicle(string year, size_t fuelAmount, size_t capacity, double enigne)
	{
		this->year = year;
		this->fuelAmount = fuelAmount;
		this->capacity = capacity;
		this->enigne = enigne;
	}

	void way()
	{
		cout << "I spend time on the way" << endl;
	}
};

class Car :public Vehicle
{
public:
	string make;
	string model;
	bool isRaceCar;
	Car(string make, string model, bool isRaceCar)
	{
		this->make = make;
		this->model = model;
		this->isRaceCar = isRaceCar;
	}

	void taxi()
	{
		cout << "I'm used for taxi" << endl;
	}
};

class Ship :public Vehicle
{
public:
	string _priority;
	string shipType;
	size_t length;
	bool isVessel;
	short tonPerYear;

	Ship(string _priority, string shipType, size_t length, bool isVessel, short tonPerYear)
	{
		this->_priority = _priority;
		this->shipType = shipType;
		this->length = length;
		this->isVessel = isVessel;
		this->tonPerYear = tonPerYear;
	}

	void priority()
	{
		cout << "My priority is: " << _priority << endl;
	}
};

class Train : public Vehicle
{
public:
	size_t countOfWagon;
	string trainType;
	short weigthCanCarry;

	Train(size_t countOfWagon, string trainType, short weigthCanCarry)
	{
		this->countOfWagon = countOfWagon;
		this->trainType = trainType;
		this->weigthCanCarry = weigthCanCarry;
	}

	void carry()
	{
		cout << "I carry: " << weigthCanCarry << " ton" << endl;
	}
};