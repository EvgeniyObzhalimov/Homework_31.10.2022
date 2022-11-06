//домашняя работа_31.10.2022
#include<iostream>
#include<string>
#include <vector>

class students {
private:
	std::string name;
	std::string surname;
	std::string patronymic;
	std::string fullname;

	
public:
	students(std::string name1, std::string surname1, std::string patronymic1) {
		name = name1;
		surname = surname1;
		patronymic = patronymic1;

	}
	void setName(std::string name1) {
		name = name1;
	}
	std::string getName() {
		return name;
	}
	void setSurname(std::string surname1) {
		surname = surname1;
	}
	std::string getSurname() {
		return surname;
	}
	void setPatronymic(std::string patronymic1) {
		patronymic = patronymic1;
	}
	std::string getPatronymic() {
		return patronymic;
	}
	void Fullname(std::string name1, std::string surname1, std::string patronymic1, std::string fullname1) {
		fullname = fullname1;
		name = name1;
		surname = surname1;
		patronymic = patronymic1;
		fullname1 = name1 + surname1 + patronymic1;
		std::cout << fullname1;
	}

};

void F01(students b) {
	std::cout << b.getName() +" "+ b.getSurname() +" "+b.getPatronymic() << "\n\n";
}
class groups {
private:
	std::string gruopname;
	static int groupnumber;
	int groupsize;
public:
	groups(static int groupnumber1) {
		groupnumber = groupnumber1;
	}
	groups(std::string groupname1) {
		gruopname = groupname1;
	}
	groups(int groupsize1) {
		groupsize = groupsize1;
	}
	void F02(std::string groupname1) {
		std::cout << groupname1;
	}
};








	int main() {
		setlocale(LC_ALL, "Russian");
		std::cout << "home task_list of students\n\n";
		std::cout << "enter students name: \n";
		std::string n, s, p;
		std::cin >> n >> s >> p;
		students a(n, s, p);
		std::cin >> n >> s >> p;
		students b(n, s, p);
		F01(a);
		std::vector<students> array;
		array.push_back(a);
		array.push_back(b);


		return 0;
	}

