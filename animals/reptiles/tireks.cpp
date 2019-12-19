#include <stdio.h>
#include <iostream>
#include <string>
#include "tireks.hpp"


tireks::~tireks() {
	std::cout << "Tireks:";
}

tireks::tireks() {
}

tireks::tireks(const tireks &p2) {
}

const std::string tireks::say() {
	return "Arrrra";
}

tireks* tireks::clone() {
	return new tireks(*this);
}

void tireks::move() {
	
}