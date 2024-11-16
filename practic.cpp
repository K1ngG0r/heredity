#include <iostream>
#pragma region Student
class People {
protected:
	std::string name;
	std::string surname;
	int age;
public:
	People() : name{ nullptr }, surname{ nullptr }, age{ 0 }{}
	People(std::string name, std::string surname, int age):
		name{ name }, surname{ surname }, age{ age } {
		std::cout << "Constructor peaple!" << std::endl;
	}
	~People()
	{
		std::cout << "Destructor peaple!" << std::endl;
	}

	void Run() {
		std::cout << name << '\t' << "run!" << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& out, const People& people) {
		out << "Name:\t" << people.name << std::endl;
		out << "Surname:\t" << people.surname << std::endl;
		out << "Age:\t" << people.age << std::endl;
		return out;
	}
};

class Student : public People {
protected:
	std::string programma;
	int well;
public:
	Student() : People(), programma{ nullptr }, well{ -1 } {}
	Student(std::string name, std::string surname, int age, std::string programma, int well) :
		People(name, surname, age), programma{ programma }, well{ well } {
		std::cout << "Constructor student!" << std::endl;
	}
	~Student()
	{
		std::cout << "Student peaple!" << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& out, const Student& student) {
		out << "Name:\t" << student.name << std::endl;
		out << "Surname:\t" << student.surname << std::endl;
		out << "Age:\t" << student.age << std::endl;
		out << "Programma:\t" << student.programma << std::endl;
		out << "Well:\t" << student.well << std::endl;
		return out;
	}

	void Sleep() {
		std::cout << "STUDENT NEVER SLEEP!" << std::endl;
	}
};

class Aspirant : public Student {
private:
	std::string workTheme;
public:
	Aspirant() :Student(), workTheme{ nullptr } {}
	Aspirant(std::string name, std::string surname, int age,
		std::string programma, int well, std::string workTheme) :
		Student(name, surname, age, programma, well), workTheme{ workTheme } {
		std::cout << "Constructor aspirant!" << std::endl;
	}
	~Aspirant()
	{
		std::cout << "Aspirant peaple!" << std::endl;
	}
	friend std::ostream& operator<<(std::ostream& out, const Aspirant& aspirant) {
		out << "Name:\t" << aspirant.name << std::endl;
		out << "Surname:\t" << aspirant.surname << std::endl;
		out << "Age:\t" << aspirant.age << std::endl;
		out << "Programma:\t" << aspirant.programma << std::endl;
		out << "Well:\t" << aspirant.well << std::endl;
		out << "Work theme:\t" << aspirant.workTheme << std::endl;
		return out;
	}

};
#pragma endregion

#pragma region Passport
struct DateOfTheBirth
{
	int day;
	int month;
	int year;
};
class Passport {
protected:
	std::string name;
	std::string surname;
	std::string sursurname;
	bool isMan;
	std::string sity;
	DateOfTheBirth date;
public:
	Passport() : name{ nullptr }, surname{ nullptr }, sursurname{ nullptr },
		isMan{ true }, sity{ nullptr }, date{ 0,0,0 } {}

	Passport(std::string name, std::string surname, std::string sursurname, 
		bool isMan, std::string sity, const DateOfTheBirth date):
		name{ name }, surname{ surname }, sursurname{ sursurname }, isMan{ isMan }, sity{ sity }, date{ date } {
		std::cout << "Constructor passpor!" << std::endl;
	}
	
	friend std::ostream& operator<<(std::ostream& out, const class Passport& people) {
		out << "Name:\t"		<< people.name << std::endl;
		out << "Surname:\t"		<< people.surname << std::endl;
		out << "Sursurname:\t"	<< people.sursurname << std::endl;
		out << "Gender:\t"		<< (people.isMan ? "man" : "woman") << std::endl;
		out << "Sity:\t"		<< people.surname << std::endl;
		out << "Surname:\t"		<< people.surname << std::endl;
		return out;
	}

};
#pragma endregion
