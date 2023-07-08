#ifndef __header_instruction__
#define __header_instruction__

#include <iostream>
#include "register.h"
#include "memory.h"

namespace INSTRUCTION {

    typedef union {
        uint32_t value;
        struct {
            uint32_t opcode  : 7;
            uint32_t reserved: 25;
        } field;
    } Instruction;

    // RV32I
    typedef union {
        uint32_t value;
        struct {
            uint32_t opcode: 7;
            uint32_t rd    : 5;
            uint32_t funct3: 3;
            uint32_t rs1   : 5;
            uint32_t rs2   : 5;
            uint32_t funct7: 7;
        } field;
    } RTypeInstruction;

    typedef union {
        uint32_t value;
        struct {
            uint32_t opcode: 7;
            uint32_t rd    : 5;
            uint32_t funct3: 3;
            uint32_t rs1   : 5;
            uint32_t imm   : 12;
        } field;
    } ITypeInstruction;

    typedef union {
        uint32_t value;
        struct {
            uint32_t opcode: 7;
            uint32_t imm1  : 5;
            uint32_t funct3: 3;
            uint32_t rs1   : 5;
            uint32_t rs2   : 5;
            uint32_t imm2  : 7;
        } field;
    } STypeINstruction;

    typedef union {
        uint32_t value;
        struct {
            uint32_t opcode: 7;
            uint32_t imm1  : 5;  // imm[4:1|11]
            uint32_t funct3: 3;
            uint32_t rs1   : 5;
            uint32_t rs2   : 5;
            uint32_t imm2  : 7;  // imm[12|10:5]
        } field;
    } BTypeInstruction;

    typedef union {
        uint32_t value;
        struct {
            uint32_t opcode: 7;
            uint32_t rd    : 5;
            uint32_t imm   : 20;
        } field;
    } UTypeInstruction;

    typedef union {
        uint32_t value;
        struct {
            uint32_t opcode: 7;
            uint32_t rd    : 5;
            uint32_t imm   : 20;  // imm[20|10:1|11|19:12]
        } field;
    } JTypeInstruction;

    class BaseInstruction {
    public:
        BaseInstruction(REGISTER::RegisterFile* reg, MEMORY::MemoryBase* mem);
        ~BaseInstruction();

        virtual void load_instruction(Instruction inst) = 0;
        virtual void execute() = 0;

        uint64_t signed_extend();
        uint64_t unsigned_extend();

    protected:
        REGISTER::RegisterFile* m_reg;
        MEMORY::MemoryBase* m_mem;
    };
}
#endif
