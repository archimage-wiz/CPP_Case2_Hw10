#include <iostream>

int main() {

	setlocale(LC_ALL, "Ru");
	std::string user_name;
	std::cout << "Введите имя: ";
	std::cin >> user_name;
	std::cout << "Здравствуйте, " << user_name << "!" << std::endl;

	return 0;
}