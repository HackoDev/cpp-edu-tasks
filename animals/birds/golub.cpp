#include <stdio.h>
#include <iostream>
#include <string>
#include "golub.hpp"


golub::~golub() {
	std::cout << "Golub:";
}

golub::golub(const golub &p2) {
} 

golub::golub() {
} 

const std::string golub::say() {
	return "urr-urr";
} 

void golub::move() {
	
};

golub* golub::clone() {
	return new golub(*this);
}