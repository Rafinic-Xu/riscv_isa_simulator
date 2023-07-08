#include "instruction.h"

namespace INSTRUCTION {
    BaseInstruction::BaseInstruction(REGISTER::RegisterFile* reg, MEMORY::MemoryBase* mem) :
        m_reg(reg),
        m_mem(mem) { ; }
    
    BaseInstruction::~BaseInstruction() { ; }
}