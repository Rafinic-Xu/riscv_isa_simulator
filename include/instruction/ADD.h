#ifndef __header_ADD__
#define __header_ADD__

#include "instruction.h"

namespace INSTRUCTION {
    class ADD: public BaseInstruction {
    public:
        ADD(REGISTER::RegisterFile* reg, MEMORY::MemoryBase* mem);
        ~ADD();

        void load_instruction(Instruction inst);
        void execute();

    private:
        RTypeInstruction m_inst;
    };
}

#endif
