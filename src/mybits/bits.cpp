#include <mybits/bits.h>

using MyBits::Bits;

Bits::Bits(const uint32_t bits)
: bits_(bits)
{}

bool Bits::isOn(const uint8_t bit) const
{
  if (bit > 32) return false;

  return (bits_ & (1 << bit)) != 0;
}

