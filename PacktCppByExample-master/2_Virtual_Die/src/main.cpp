#include <iostream>
#include <random>

int main(int argc, char* argv[])
{
	std::random_device random_device;
	std::default_random_engine random_engine(random_device());
	std::uniform_int_distribution<int> uniform_int_distribution(1, 6);

	auto random_int = uniform_int_distribution(random_engine);
	std::cout << random_int << std::endl;

	return 0;
}
