#pragma once

#include <cstdint>

namespace nnct {
namespace letter_can {

union Identifier {
    uint32_t raw;
    struct {
        uint32_t target: 8;
        uint32_t source: 8;
        uint32_t unused: 13;
    } persed;
};

}
}
