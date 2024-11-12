#pragma once

namespace enum_asukiaaa {

enum class StateUse : uint8_t {
  Undefined,
  Used,
  NotUsed,
};

enum class LangCode : uint16_t {
  undefined,
  en,
  ja,
};

enum class CommunicationError : uint8_t {
  crcUnmatch = 10,
};

namespace CommunicationErrorUint8 {
const uint8_t crcUnmatch = (uint8_t)CommunicationError::crcUnmatch;
}

}  // namespace enum_asukiaaa
