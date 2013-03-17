// include project libraries that are needed for testing
#include "modules/input.hpp"
#include "modules/files.hpp"
#include "classes/controller.hpp"

// include c++ libraries that are not included previously
#include <iostream>

// test input module for various user input elements
void testInput() {

	std::cout << "Test integer input" << std::endl;
	std::cout << input::getInteger() << std::endl;

	std::cout << "Test string input" << std::endl;
	std::cout << input::getString() << std::endl;

};

void test(int i) {


	std::cout << i << std::endl;

}

void testFiles() {

	auto callback = [] () {

		std::cout << "HELLO WORLD" << std::endl;

	};

	files::loadFile("data/test.txt", test);
	// files::loadFile("data/test.txt", callback);



}


int main() {

	// testInput();//test the input module

	testFiles();//test the file input module


}
