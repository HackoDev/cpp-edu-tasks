#include <stdio.h>
#include <iostream>
#include <string>
#include "mammal.hpp"


mammal::~mammal() {
	std::cout << "Mammal";
}

mammal::mammal() {
}

mammal::mammal(const mammal &p2) {
}

const std::string mammal::say() {
	return "qwe";
}

mammal* mammal::clone() {
	return new mammal(*this);
}