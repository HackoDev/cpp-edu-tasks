#include <stdio.h>
#include <iostream>
#include <string>
#include "reptile.hpp"


reptile::~reptile() {
	std::cout << "Reptile";
}

reptile::reptile() {
}

reptile::reptile(const reptile &p2) {
}

const std::string reptile::say() {
	return "Shhhhhhh";
}

reptile* reptile::clone() {
	return new reptile(*this);
}