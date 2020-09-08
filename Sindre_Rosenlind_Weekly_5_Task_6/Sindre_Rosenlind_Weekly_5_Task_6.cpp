#include <iostream>
#include <string>

int main() {
	int i = 0;
	do {
		i++;
		if (i % 5 == 0) {
			std::cout << i << std::endl;
		}
	} while (i <= 50);
	return 0;
}