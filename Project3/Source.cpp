#include <iostream>
#include "Person.h"
#include "Price.h"

int main() {

	setlocale(LC_ALL, "Russian");

	Person p1("Alex");
	Person p2("John");

	std::cout << p1.getName() << "\n";
	std::cout << p2.getName() << "\n";

	//Person p3 = p1.operator+(p2);
	Person p3 = p1 + p2;
	std::cout << "===================\n";
	std::cout << p3.getName() << "\n";


	//bool res = p1.operator>(p2);
	std::cout << "Больше ли р1, чем р2? --->" << (p1 > p2) << "\n";


	Price pr1("Zavod1", 1000);
	Price pr2("Zavod2", 2000);

	std::cout << pr1.getPrice() << "\n";
	std::cout << pr2.getPrice() << "\n";

	std::cout << " Цена контрагента 1 равна цене контрагента 2? \n" << (pr1 == pr2) << "\n";
	std::cout << " 0 - ложь\n";
	std::cout << " 1 - правда\n";

}