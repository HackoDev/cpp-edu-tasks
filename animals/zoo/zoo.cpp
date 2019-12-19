#include <stdio.h>
#include <iostream>
#include <string>
#include "zoo.hpp"
#include "../base/animal.hpp"


zoo::~zoo() {
	for(auto const& a: animals) {
		delete a;
	}
	std::cout << "ZOO: zoo destroyed" << std::endl;
}

zoo::zoo() {
	std::cout << "ZOO: zoo initialized" << std::endl;
}

void zoo::addAnimal(animal *a) {
	std::cout << "ZOO: New animal has been added to zoo" << std::endl;
	animals.push_back(a->clone());
}


void zoo::walk() {
	for(auto const& a: animals) {
		std::cout << "walk:- " << a->say() << std::endl;
	}
}