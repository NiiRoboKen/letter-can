#pragma once

#include <inttypes.h>

namespace nnct {
namespace letter_can {

struct Identifier {
    Identifier();
    Identifier(uint8_t sender_id, uint8_t receiver_id, uint16_t data);

    uint8_t  senderID   {0x00};
    uint8_t  receiverID {0x00};
    uint16_t data {0x0000};

    static uint32_t merge(Identifier id);
    static Identifier perse(uint32_t id);
};

}
}
