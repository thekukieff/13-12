#ifndef aShop_HPP
#define aShop_HPP
#include <iostream>
#include <vector>
#include "aCar.hpp"


class aShop {
public:
	aShop();
	aShop(std::string name, float price);
		

private:
	std::string name_;
	float price_;

};



#endif aShop_HPP
