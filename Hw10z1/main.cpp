#include <iostream>

int main() {

	setlocale(LC_ALL, "Ru");
	std::string user_name;
	std::cout << "������� ���: ";
	std::cin >> user_name;
	std::cout << "������������, " << user_name << "!" << std::endl;

	return 0;
}