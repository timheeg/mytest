#ifndef mybits_bits_h
#define mybits_bits_h

namespace MyBits
{
  class Bits
  {
  public:
    Bits(const uint32_t bits);
    bool isOn(const uint8_t bit) const;

  private:
    uint32_t bits_;
  };
}

#endif

