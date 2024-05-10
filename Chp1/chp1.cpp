// chp1.cpp
#include <iostream>
#include <string>

int main() {
	// 1-1
	const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";

	// 1-2

	// https://cplusplus.com/forum/beginner/110670/#google_vignette
	const std::string exclaim = "!";
	const std::string msg = "Hello" + ", world" + exclaim;

	return 0;
}