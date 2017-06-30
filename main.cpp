#include <iostream>
#include <vector>


int main() {
	std::vector<int>integers;
	int x = 20;
	// insert sample integers into the vector
	integers.push_back(50);
	integers.push_back(20);
	integers.push_back(987);
	integers.push_back(10001);

	std::cout << "The vector contains " << integers.size() << " elements " << std::endl;

	for (int i = 0; i < integers.size(); ++i) {
		std::cout << integers[i] << ", " << std::endl;
	}


	return 0;
}