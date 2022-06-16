#pragma once
//Single 
class Film
{
public:
	string name="";
	string language="";
	string genre="";
	Film() = default;
	Film(string name,string language,string genre)
	{
		this->name = name;
		this->language = language;
		this->genre = genre;
	}

	void playingOnCinema()
	{
		cout << "Cinema" << endl;
	}

	void start()
	{
		cout << "Film started" << endl;
	}

	void end()
	{
		cout << "Film ended" << endl;
	}
};

class Inception :public Film
{
public:
	double rating=0;
	string headActor="";
	string description="";
	Inception() = default;
	Inception(double rating,string headActor,string description)
	{
		this->rating = rating;
		this->headActor = headActor;
		this->description = description;
	}

	void becomeFamous() {
		cout << "Film is famous now" << endl;
	}

	void getReward()
	{
		cout << "Film is rewarded" << endl;
	}

	void newSeason()
	{
		cout << "New season of the film broadcasted" << endl;
	}
};