#include "letter_can.hpp"

namespace nnct {
namespace letter_can {

Identifier::Identifier() {}
Identifier::Identifier(uint8_t sender_id, uint8_t receiver_id, uint16_t data) :
senderID(sender_id), receiverID(receiver_id), data(data) {}

uint32_t Identifier::merge(Identifier letter_can_id) {
    return (letter_can_id.data << 16) + (letter_can_id.senderID << 8) + letter_can_id.receiverID;
}

Identifier Identifier::perse(uint32_t raw_id) {
    return Identifier((raw_id >> 8) & 0xFF, raw_id & 0xFF, raw_id >> 16);
}

}
}
