#include "Person.h"


Person::Person() {
	_name = "DefaultName";
	_id = -1;
}

Person::Person(const std::string& name) : _name(name), _id(-1) {}

//возвращаемый тип, класс::функция() ключевые слова {}
const std::string& Person::getName() const {
	return _name;
}

void Person::setName(const std::string& name) {
	_name = name;
}

size_t Person::getID() const{
	return _id;
}


void Person::setID(size_t id) {
	_id = id;
}

Person Person::operator+(const Person& other) {
	std::string resName = _name + other.getName();
	Person resPerson(resName);
	return resPerson;
}

//res = p1.operator>(p2);
bool Person::operator>(const Person& other) {
	//return _name.size() > other.getName().size;
	int mySize = _name.size();
	int othersize = other.getName().size();
	if (mySize > othersize)
		return true;

}