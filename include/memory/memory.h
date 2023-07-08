#ifndef __header_memory__
#define __header_memory__

#include <iostream>
#include <map>

#define HalfWord_BitWidth (16)
#define HalfWord_ByteWidth (HalfWord_BitWidth / 8)
#define Word_BitWidth (32)
#define Word_ByteWidth (Word_BitWidth / 8)
#define DoubleWord_BitWidth (64)
#define DoubleWord_ByteWidth (DoubleWord_BitWidth / 8)
#define QuadWord_BitWidth (128)
#define QuadWord_ByteWidth (QuadWord_BitWidth / 8)

namespace MEMORY {
    const uint32_t PAGE_SIZE = 10;  // in a page, there are 2^PAGE_SIZE Byte 

    class MemoryBase {
    public:
        MemoryBase();
        ~MemoryBase();
        
        void load(const uint64_t addr, uint64_t byte_num, uint8_t* data) const;
        void store(const uint64_t addr, uint64_t byte_num, uint8_t* data);
    private:
        std::map<uint64_t, uint8_t*> mem;
    };

}

#endif
