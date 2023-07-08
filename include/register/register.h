#ifndef __header_register__
#define __header_register__

#include <iostream>

namespace REGISTER {
    const uint64_t DEADBEEF = 0xdeadbeefdeadbeef;

    class RegisterFile {
    public:
        RegisterFile();
        ~RegisterFile();
    private:
        /****** x[0] ~ x[31] Declaration Start ******/
        const uint64_t x0_zero;   // Hard-wired zero
              uint64_t x1_ra;     // Return address, Caller
              uint64_t x2_sp;     // Stack pointer, Callee
              uint64_t x3_gp;     // Global pointer
              uint64_t x4_tp;     // Thread pointer
              uint64_t x5_t0;     // Temporary / alternate link register, Caller
              uint64_t x6_t1;     // Temporaries, Caller
              uint64_t x7_t2;     // Temporaries, Caller
              uint64_t x8_s0_fp;  // Saved register / frame pointer, Callee
              uint64_t x9_s1;     // Saved register
              uint64_t x10_a0;    // Function arguments / return values, Caller
              uint64_t x11_a1;
              uint64_t x12_a2;    // Function arguments
              uint64_t x13_a3;
              uint64_t x14_a4;
              uint64_t x15_a5;
              uint64_t x16_a6;
              uint64_t x17_a7;
              uint64_t x18_s2;    // Saved registers
              uint64_t x19_s3;
              uint64_t x20_s4;
              uint64_t x21_s5;
              uint64_t x22_s6;
              uint64_t x23_s7;
              uint64_t x24_s8;
              uint64_t x25_s9;
              uint64_t x26_s10;
              uint64_t x27_s11;
              uint64_t x28_t3;    // Temporaries
              uint64_t x29_t4;
              uint64_t x30_t5;
              uint64_t x31_t6;
        /****** x[0] ~ x[31] Declaration End ******/
    
    public:
        uint64_t pc;
        uint64_t* const x[32];
    };
}

#endif
