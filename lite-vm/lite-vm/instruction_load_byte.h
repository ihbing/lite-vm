#ifndef LITE_INSTRUCTION_LOAD_BYTE_H
#define LITE_INSTRUCTION_LOAD_BYTE_H

#include "instruction.h"
#include "types.h"

namespace lite
{
	class instruction_load_byte : public instruction
	{
	public:
		instruction_load_byte();
		virtual ~instruction_load_byte();

		virtual byte bytecode() const;

		virtual std::string regex();
		virtual std::vector<byte> compile(std::smatch match);

		virtual void execute(virtual_machine& pVirtualMachine);
	};
}

#endif