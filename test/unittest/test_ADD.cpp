#include "ADD.h"
#include "memory.h"
#include "register.h"

int main() {
    MEMORY::MemoryBase mem;
    REGISTER::RegisterFile reg;
    INSTRUCTION::ADD add(&reg, &mem);
    INSTRUCTION::RTypeInstruction add_instr = {0};
    add_instr.field.rs1 = 1;
    add_instr.field.rs2 = 2;
    add_instr.field.rd  = 3;
    *reg.x[1] = 0xff;
    *reg.x[2] = 0xff00;
    add.load_instruction(*(INSTRUCTION::Instruction*)&add_instr);
    std::cout << std::hex << "before execute: " << *reg.x[3] << std::endl;
    add.execute();
    std::cout << std::hex << "after execute: " << *reg.x[3] << std::endl;
    return *reg.x[3] == 0xffff ? 0 : 1;
}