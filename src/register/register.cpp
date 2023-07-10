#include "register.h"

namespace REGISTER {
    RegisterFile::RegisterFile() :
        /****** init RV64I x register ******/
        x0_zero(0),         x1_ra(DEADBEEF),  x2_sp(DEADBEEF),   x3_gp(DEADBEEF),
        x4_tp(DEADBEEF),    x5_t0(DEADBEEF),  x6_t1(DEADBEEF),   x7_t2(DEADBEEF),
        x8_s0_fp(DEADBEEF), x9_s1(DEADBEEF),  x10_a0(DEADBEEF),  x11_a1(DEADBEEF),
        x12_a2(DEADBEEF),   x13_a3(DEADBEEF), x14_a4(DEADBEEF),  x15_a5(DEADBEEF),
        x16_a6(DEADBEEF),   x17_a7(DEADBEEF), x18_s2(DEADBEEF),  x19_s3(DEADBEEF),
        x20_s4(DEADBEEF),   x21_s5(DEADBEEF), x22_s6(DEADBEEF),  x23_s7(DEADBEEF),
        x24_s8(DEADBEEF),   x25_s9(DEADBEEF), x26_s10(DEADBEEF), x27_s11(DEADBEEF),
        x28_t3(DEADBEEF),   x29_t4(DEADBEEF), x30_t5(DEADBEEF),  x31_t6(DEADBEEF),
        /****** init pc ******/
        pc(DEADBEEF),
        /****** link x[0] ~ x[31] to real register ******/
        x{  (uint64_t*)&x0_zero, &x1_ra,  &x2_sp,   &x3_gp,
            &x4_tp,              &x5_t0,  &x6_t1,   &x7_t2,
            &x8_s0_fp,           &x9_s1,  &x10_a0,  &x11_a1,
            &x12_a2,             &x13_a3, &x14_a4,  &x15_a5,
            &x16_a6,             &x17_a7, &x18_s2,  &x19_s3,
            &x20_s4,             &x21_s5, &x22_s6,  &x23_s7,
            &x24_s8,             &x25_s9, &x26_s10, &x27_s11,
            &x28_t3,             &x29_t4, &x30_t5,  &x31_t6} { ; }

    RegisterFile::~RegisterFile() { ; }
}