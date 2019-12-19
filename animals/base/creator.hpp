#ifndef CREATOR_H_INCLUDED
#define CREATOR_H_INCLUDED
#include <string>
#include "animal.hpp"

template<class T>
class creator: public T {
public:
	creator(): T() {};
	creator(const T &t): T(t) {
		age = t.getAge();
		name = t.getName();
	};
	creator(std::string n, int a): name(n), age(a) {};
	virtual ~creator() {};

	const std::string getName() const {
		return name;
	}
	const int getAge() const {
		return age;
	}
protected:
	std::string name;
	int age;
};

#endif
