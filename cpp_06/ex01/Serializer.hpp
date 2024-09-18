#pragma once
#include <main.h>
#include <Data.hpp>

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer& cp);
		Serializer&operator=(const Serializer& cp);
		~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
