#include <iostream>
#include <string>

using namespace std;

class Sotrudnik
{
private:
	string name;
protected:
	int vozrast;
public:
	int zp;
	void display()
	{
		cout << "Name: " << name << "\tvozrast: " << vozrast << "\t\tzp: " << zp << endl;
	}
	Sotrudnik() { };
	Sotrudnik(string name, int vozrast, int zp) { this->name = name; this->vozrast = vozrast; this->zp = zp; }
	~Sotrudnik() { };

	void setPosition(string name) { this->name = name; };
	void setSalary(int zp) { this->zp = zp; };
	void setAge(int vozrast) { this->vozrast = vozrast; };
};

class BigBoss : public Sotrudnik
{
private:
	int bonus = 15000;
	string name;
public:
	int GetBonus()
	{
		return bonus;
	}
	string GetName()
	{
		return name;
	}

	int zp_bonus;
	BigBoss() { };
	BigBoss(string name, int vozrast, int zp) { this->name = name; this->vozrast = vozrast; this->zp = zp; }
	void display()
	{
		zp_bonus = zp + bonus;
		cout << "Name: " << name << "\tvozrast: " << vozrast << "\t\tzp: " << zp << "\t\tBonus: " << bonus << "\tzp_bonus: " << zp_bonus << endl;
	}
};

int main()
{
	Sotrudnik Evgeniy("Evgeniy", 25, 37500);

	BigBoss Valentin("Valentin", 45, 95000);

	Evgeniy.display();
	Valentin.display();
}