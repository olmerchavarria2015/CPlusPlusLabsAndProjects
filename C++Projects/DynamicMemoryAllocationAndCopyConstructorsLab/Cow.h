#pragma once //Cow class prototype goes in this header file
class Cow
{
public:
	Cow();
	Cow(const char* n, double w);
	Cow(const Cow& c);
	~Cow();
	Cow& operator=(const Cow& c);
	void ShowCow() const;  // display all cow data
private:
    char* name;
	double weight;
};