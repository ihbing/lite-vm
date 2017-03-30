#include <sstream>

#include "exception.h"

using namespace lite;

exception::exception(const word pProgramCounter) : mProgramCounter(pProgramCounter) {}
exception::~exception() {}
word exception::where() const
{
	return mProgramCounter;
}

invalid_address_exception::invalid_address_exception(const word pProgramCounter, const word pAddress) : exception(pProgramCounter), mAddress(pAddress) {}
invalid_address_exception::~invalid_address_exception() {}
char const * invalid_address_exception::what() const 
{ 
	return "Address out of bounds.";
}

invalid_register_exception::invalid_register_exception(const word pProgramCounter, const word pRegister) : exception(pProgramCounter), mRegister(pRegister) {}
invalid_register_exception::~invalid_register_exception() {}
char const * invalid_register_exception::what() const
{
	return "Register out of bounds.";
}

invalid_instruction_exception::invalid_instruction_exception(const word pProgramCounter) : exception(pProgramCounter) {}
invalid_instruction_exception::~invalid_instruction_exception() {}
char const * invalid_instruction_exception::what() const
{
	return "Invalid instruction code.";
}