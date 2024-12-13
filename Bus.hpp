#ifndef BUS_HPP
#define BUS_HPP
#include "aCar.hpp"
#include "aShop.hpp"

class Bus :public aCar {
public:
	Bus(std::string name);


private:
	std::string name_;
	
};



#endif BUS_HPP