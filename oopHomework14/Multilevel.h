#pragma once
//Multilevel

class Human
{
public:
	string name="";
	string surname="";
	short age=0;

	Human() = default;

	Human(string name,string surname ,short age )
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
	}

	void eat() {
		cout << "I can eat" << endl;
	}

	void sleep()
	{
		cout << "I can sleep" << endl;
	}

	void run()
	{
		cout << "I can run" << endl;
	}
};

class Employee : public Human
{
public:
	double salary=0;
	string workPlace="";
	string jobName="";
	short workHour=0;
	Employee() = default;
	Employee(double salary,string workPlace,string jobName,short workHour)
	{
		this->salary = salary;
		this->workPlace = workPlace;
		this->jobName = jobName;
		this->workHour = workHour;
	}

	void earn()
	{
		cout << "I earn money" << endl;
	}

	void goWork()
	{
		cout << "I go to work" << endl;
	}

	void rights()
	{
		cout << "I have worker rights" << endl;
	}
};

class Limner :public Employee
{
public:
	string famousArt="";
	string lastArt="";
	short countOfArt=0;
	string genre="";
	Limner() = default;

	Limner(string famousArt,string lastArt,short countOfArt,string genre)
	{
		this->famousArt = famousArt;
		this->lastArt = lastArt;
		this->countOfArt = countOfArt;
		this->genre = genre;
	}

	void paint()
	{
		cout << "I draw pictures" << endl;
	}

	void sell()
	{
		cout << "I sell my works" << endl;
	}

	void buyAquarel()
	{
		cout << "I buy and use aquarell" << endl;
	}
};