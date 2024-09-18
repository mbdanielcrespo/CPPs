#include <Serializer.hpp>
#include <iostream>
#include <Data.hpp>

int main()
{
	Data myData;
	myData.value = 42;
	myData.name = "Test Object";

	std::cout << YELLOW << "Original Data: " << myData.value << ", " << myData.name << RESET << std::endl;
	uintptr_t raw = Serializer::serialize(&myData);
	std::cout << YELLOW "Serialized raw value (uintptr_t): " << raw << RESET << std::endl;
	Data* deserializedData = Serializer::deserialize(raw);
	std::cout << YELLOW << "Deserialized Data: " << deserializedData->value << ", " << deserializedData->name << RESET << std::endl;

	if (deserializedData == &myData)
		std::cout << GREEN << "Success: The deserialized pointer is equal to the original pointer!" << RESET << std::endl;
	else
		std::cout << RED << "Error: The deserialized pointer is not equal to the original pointer!" << RESET << std::endl;
	return 0;
}