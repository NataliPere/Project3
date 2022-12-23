#pragma once
#include <string>
class Person
{
public:
	Person();
	Person(const std::string& name);

	//std::string возвращаем по ссылке, т.к. тип может много весить
	const std::string& getName() const;
	void setName(const std::string& name);

	size_t getID() const;
	void setID(size_t id);

	Person operator+(const Person& other); //res = p1 + p2; тоже самое: res = p1.operator+(p2);

	bool operator>(const Person& other);


private:
	std::string _name;
	size_t _id; //тип перечисления, выходит за границы типа int



};

