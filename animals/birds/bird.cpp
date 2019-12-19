#include <stdio.h>
#include <iostream>
#include <string>
#include "bird.hpp"


bird::~bird() {
	std::cout << "Bird";
}

bird::bird(const bird &p2) {
} 

bird::bird() {
} 

const std::string bird::say() {
	return "asdas";
} 

void bird::move() {
	
};

bird* bird::clone() {
	return new bird(*this);
}