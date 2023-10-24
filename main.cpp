#include <iostream>
#include <string>


int addNum(int first, int sec) {
	int result = first + sec;
	return result;
}






 int main() {
	//my comment it works correctly

	int first_number {3};
	int sec = {7};


	signed int test = {3};
	// unsigned int test = {-3} - errror only positive nums





	int sum = addNum(first_number, sec);


 
	std::cout << "first" << first_number << std::endl;
	std::cout << "second" << sec << std::endl;
	std::cout << "second " << sum << std::endl;




	std::cout << "hello world!" << std::endl;
	std::cout << "hello world! 2" << std::endl;

	int value = 10 / 2;


	std::cout << "value: " << value << std::endl;




	std::cout << "jhello" << std::endl;

	int age {21};

	std::cout << "age " << age << std::endl;

	std::cerr << "sldfkjdl" << std::endl;
	std::clog << "sldfkjdl" << std::endl;




	int age1 {2};
	std::string name;


	std::cout << "name: " << std::endl;

	std::cin >> name;

	std::cout << "name is " << name << std::endl;





	std::cout << "--------------" << std::endl;

	bool my__bool = {false};


	std::cout << "is true: " << my__bool << std::endl;

	if(my__bool == false) {
		std::cout << "meow" << "it's false" << std::endl;
	}




	return 0;
 }