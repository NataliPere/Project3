#include "Price.h"

Price::Price() {
	_namecontragent = "DefaultName";
	_price = 1000;
}

Price::Price(const std::string& namecontragent, int price) : _namecontragent(namecontragent), _price(price) {}

const std::string& Price::getNameContragent() const {
	return _namecontragent;
}

void Price::setNameContragent(const std::string& nameconragent) {
	_namecontragent = nameconragent;
}

size_t Price::getPrice() const {
	return _price;
}


void Price::setPrice(size_t price) {
	_price = price;
}


bool Price::operator==(const Price& other) {
	
	return _price == other._price;
	//	return true;
	//else 
	//	return false;
}