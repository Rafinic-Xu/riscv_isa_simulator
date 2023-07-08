#include "memory.h"

namespace MEMORY {
    MemoryBase::MemoryBase() { ; }

    MemoryBase::~MemoryBase() {
        for (auto& iter : mem) {
            delete iter.second; 
        }
    }

    void MemoryBase::load(const uint64_t addr, uint64_t byte_num, uint8_t* data) const {
        ;
    }

    void MemoryBase::store(const uint64_t addr, uint64_t byte_num, uint8_t* data) {
        ;
    }
}
