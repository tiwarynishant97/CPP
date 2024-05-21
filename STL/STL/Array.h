#pragma once
#include <iostream>

int* normalarray() {

	static int basic[3] = {1,2,3};
	//std::cout << "Address of basic " << &basic << std::endl;
	return basic;
}