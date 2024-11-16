#include <iostream>
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

class Worker : public People {
private:
	std::string work;
	int salary;
public:
	Worker(std::string name, std::string surname, int age,
		std::string work, int salary) :
		People(name, surname, age), work{ work }, salary{ salary } {
		std::cout << "Constructor worker!" << std::endl;
	}
	~Worker()
	{
		std::cout << "Destructor peaple!" << std::endl;
	}
	
	void Work() {
		std::cout << name << '\t' << "work!" << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& out, const Worker& worker) { 
		out << "Name:\t" << worker.name << std::endl;
		out << "Surname:\t" << worker.surname << std::endl;
		out << "Age:\t" << worker.age << std::endl;
		out << "Work:\t" << worker.work << std::endl;
		out << "Salary:\t" << worker.salary << std::endl;
		return out;
	}

};

int main()
{
	Worker jon("Vasua", "Pypkin", 37, "Tyda-Syda", 10000);
	std::cout << jon << std::endl;
	jon.Run();
	jon.Work();
}
