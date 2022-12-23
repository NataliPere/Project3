#pragma once
#include <string>

class Price
{
public:
	Price();
	Price(const std::string& namecontagent, int price);

	const std::string& getNameContragent() const;
	void setNameContragent(const std::string& namecontragent);

	size_t getPrice() const;
	void setPrice(size_t price);

	bool operator==(const Price& other);

	
private:
	std::string _namecontragent;
	size_t _price;





};

