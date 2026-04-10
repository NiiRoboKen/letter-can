#pragma once

#include <inttypes.h>

namespace nnct {
namespace letter_can {

struct Identifier {
    Identifier();
    Identifier(uint8_t address, uint32_t data);
    uint8_t address;
    uint32_t data;
};

Identifier perse(uint32_t raw_id);
uint32_t merge(Identifier letter_can_id);

}
}
