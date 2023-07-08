#include "ADD.h"

namespace INSTRUCTION {
    ADD::ADD(REGISTER::RegisterFile* reg, MEMORY::MemoryBase* mem) :
        BaseInstruction(reg, mem) { ; }
    
    ADD::~ADD() { ; }

    void ADD::load_instruction(Instruction inst) {
        m_inst.value = inst.value;
    }

    void ADD::execute() {
        // riscv architecture do not care overflow!
        uint32_t rd  = m_inst.field.rd;
        uint32_t rs1 = m_inst.field.rs1;
        uint32_t rs2 = m_inst.field.rs2;
        *m_reg->x[rd] = *m_reg->x[rs1] + *m_reg->x[rs2];
        // TODO: log here!
    }
}
