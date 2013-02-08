#include "shinonome.hxx"

uint16_t const SHINONOME_HANKAKU[0x100][12] = {
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x00
  { 0x00, 0x04, 0x04, 0x0e, 0x0e, 0x1f, 0x1f, 0x0e, 0x0e, 0x04, 0x04, 0x00, }, // 0x01
  { 0x2a, 0x15, 0x2a, 0x15, 0x2a, 0x15, 0x2a, 0x15, 0x2a, 0x15, 0x2a, 0x15, }, // 0x02
  { 0x00, 0x05, 0x05, 0x07, 0x05, 0x05, 0x1c, 0x08, 0x08, 0x08, 0x08, 0x00, }, // 0x03
  { 0x00, 0x07, 0x01, 0x07, 0x01, 0x07, 0x1c, 0x04, 0x1c, 0x04, 0x04, 0x00, }, // 0x04
  { 0x00, 0x06, 0x01, 0x01, 0x01, 0x06, 0x0c, 0x14, 0x0c, 0x14, 0x14, 0x00, }, // 0x05
  { 0x00, 0x01, 0x01, 0x01, 0x01, 0x07, 0x1c, 0x04, 0x1c, 0x04, 0x04, 0x00, }, // 0x06
  { 0x00, 0x06, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x07
  { 0x00, 0x04, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x04, 0x00, 0x1f, 0x00, 0x00, }, // 0x08
  { 0x00, 0x03, 0x05, 0x05, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04, 0x1c, 0x00, }, // 0x09
  { 0x00, 0x05, 0x05, 0x05, 0x05, 0x02, 0x0c, 0x14, 0x0c, 0x14, 0x14, 0x00, }, // 0x0a
  { 0x04, 0x04, 0x04, 0x04, 0x04, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x0b
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, }, // 0x0c
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, }, // 0x0d
  { 0x04, 0x04, 0x04, 0x04, 0x04, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x0e
  { 0x04, 0x04, 0x04, 0x04, 0x04, 0x3f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, }, // 0x0f
  { 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x10
  { 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x11
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x12
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, }, // 0x13
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, }, // 0x14
  { 0x04, 0x04, 0x04, 0x04, 0x04, 0x3c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, }, // 0x15
  { 0x04, 0x04, 0x04, 0x04, 0x04, 0x07, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, }, // 0x16
  { 0x04, 0x04, 0x04, 0x04, 0x04, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x17
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, }, // 0x18
  { 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, }, // 0x19
  { 0x00, 0x00, 0x18, 0x06, 0x01, 0x06, 0x18, 0x1f, 0x00, 0x1f, 0x00, 0x00, }, // 0x1a
  { 0x00, 0x00, 0x03, 0x0c, 0x10, 0x0c, 0x03, 0x1f, 0x00, 0x1f, 0x00, 0x00, }, // 0x1b
  { 0x00, 0x00, 0x00, 0x1f, 0x0a, 0x0a, 0x0a, 0x0a, 0x1a, 0x01, 0x00, 0x00, }, // 0x1c
  { 0x00, 0x10, 0x10, 0x08, 0x1f, 0x04, 0x1f, 0x02, 0x01, 0x01, 0x00, 0x00, }, // 0x1d
  { 0x00, 0x18, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x04, 0x06, 0x25, 0x1a, 0x00, }, // 0x1e
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x1f
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x20
  { 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, }, // 0x21
  { 0x00, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x22
  { 0x00, 0x08, 0x0a, 0x1e, 0x0b, 0x0a, 0x0a, 0x1e, 0x0b, 0x0a, 0x02, 0x00, }, // 0x23
  { 0x00, 0x04, 0x0e, 0x15, 0x15, 0x06, 0x0c, 0x14, 0x15, 0x0e, 0x04, 0x00, }, // 0x24
  { 0x00, 0x12, 0x15, 0x0a, 0x08, 0x04, 0x04, 0x0a, 0x16, 0x09, 0x01, 0x00, }, // 0x25
  { 0x00, 0x06, 0x09, 0x09, 0x06, 0x02, 0x15, 0x09, 0x09, 0x16, 0x00, 0x00, }, // 0x26
  { 0x00, 0x0c, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x27
  { 0x00, 0x10, 0x08, 0x08, 0x04, 0x04, 0x04, 0x04, 0x08, 0x08, 0x10, 0x00, }, // 0x28
  { 0x00, 0x01, 0x02, 0x02, 0x04, 0x04, 0x04, 0x04, 0x02, 0x02, 0x01, 0x00, }, // 0x29
  { 0x00, 0x00, 0x00, 0x04, 0x15, 0x0e, 0x15, 0x04, 0x00, 0x00, 0x00, 0x00, }, // 0x2a
  { 0x00, 0x00, 0x00, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, }, // 0x2b
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x02, 0x00, }, // 0x2c
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x2d
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, }, // 0x2e
  { 0x00, 0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 0x00, }, // 0x2f
  { 0x00, 0x0c, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x0c, 0x00, 0x00, }, // 0x30
  { 0x00, 0x04, 0x07, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0x31
  { 0x00, 0x0e, 0x11, 0x11, 0x10, 0x08, 0x04, 0x02, 0x01, 0x1f, 0x00, 0x00, }, // 0x32
  { 0x00, 0x0e, 0x11, 0x10, 0x0c, 0x10, 0x10, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0x33
  { 0x00, 0x08, 0x0c, 0x0c, 0x0a, 0x0a, 0x09, 0x1f, 0x08, 0x08, 0x00, 0x00, }, // 0x34
  { 0x00, 0x0f, 0x01, 0x01, 0x0f, 0x11, 0x10, 0x10, 0x11, 0x0e, 0x00, 0x00, }, // 0x35
  { 0x00, 0x0c, 0x02, 0x01, 0x0f, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0x36
  { 0x00, 0x1f, 0x10, 0x08, 0x08, 0x08, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0x37
  { 0x00, 0x0e, 0x11, 0x11, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0x38
  { 0x00, 0x0e, 0x11, 0x11, 0x11, 0x1e, 0x10, 0x10, 0x08, 0x06, 0x00, 0x00, }, // 0x39
  { 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, }, // 0x3a
  { 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x02, 0x00, 0x00, 0x00, }, // 0x3b
  { 0x00, 0x00, 0x10, 0x08, 0x04, 0x02, 0x04, 0x08, 0x10, 0x00, 0x00, 0x00, }, // 0x3c
  { 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x3d
  { 0x00, 0x00, 0x02, 0x04, 0x08, 0x10, 0x08, 0x04, 0x02, 0x00, 0x00, 0x00, }, // 0x3e
  { 0x00, 0x0e, 0x11, 0x11, 0x08, 0x08, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, }, // 0x3f
  { 0x00, 0x0e, 0x11, 0x19, 0x15, 0x15, 0x15, 0x09, 0x11, 0x0e, 0x00, 0x00, }, // 0x40
  { 0x00, 0x04, 0x04, 0x0a, 0x0a, 0x0a, 0x1f, 0x11, 0x11, 0x11, 0x00, 0x00, }, // 0x41
  { 0x00, 0x0f, 0x11, 0x11, 0x09, 0x0f, 0x11, 0x11, 0x11, 0x0f, 0x00, 0x00, }, // 0x42
  { 0x00, 0x0c, 0x12, 0x11, 0x01, 0x01, 0x01, 0x11, 0x12, 0x0c, 0x00, 0x00, }, // 0x43
  { 0x00, 0x07, 0x09, 0x11, 0x11, 0x11, 0x11, 0x11, 0x09, 0x07, 0x00, 0x00, }, // 0x44
  { 0x00, 0x1f, 0x01, 0x01, 0x01, 0x0f, 0x01, 0x01, 0x01, 0x1f, 0x00, 0x00, }, // 0x45
  { 0x00, 0x1f, 0x01, 0x01, 0x01, 0x0f, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, }, // 0x46
  { 0x00, 0x0c, 0x12, 0x01, 0x01, 0x1d, 0x11, 0x11, 0x12, 0x1c, 0x00, 0x00, }, // 0x47
  { 0x00, 0x11, 0x11, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, }, // 0x48
  { 0x00, 0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00, }, // 0x49
  { 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x09, 0x06, 0x00, 0x00, }, // 0x4a
  { 0x00, 0x11, 0x09, 0x05, 0x03, 0x05, 0x05, 0x09, 0x09, 0x11, 0x00, 0x00, }, // 0x4b
  { 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1f, 0x00, 0x00, }, // 0x4c
  { 0x00, 0x11, 0x11, 0x1b, 0x1b, 0x1b, 0x15, 0x15, 0x15, 0x11, 0x00, 0x00, }, // 0x4d
  { 0x00, 0x11, 0x13, 0x13, 0x15, 0x15, 0x19, 0x19, 0x11, 0x11, 0x00, 0x00, }, // 0x4e
  { 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0x4f
  { 0x00, 0x0f, 0x11, 0x11, 0x11, 0x0f, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, }, // 0x50
  { 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x15, 0x09, 0x16, 0x00, 0x00, }, // 0x51
  { 0x00, 0x0f, 0x11, 0x11, 0x11, 0x0f, 0x09, 0x11, 0x11, 0x11, 0x00, 0x00, }, // 0x52
  { 0x00, 0x0e, 0x11, 0x01, 0x06, 0x08, 0x10, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0x53
  { 0x00, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0x54
  { 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0x55
  { 0x00, 0x11, 0x11, 0x11, 0x11, 0x0a, 0x0a, 0x0a, 0x04, 0x04, 0x00, 0x00, }, // 0x56
  { 0x00, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x0a, 0x0a, 0x0a, 0x00, 0x00, }, // 0x57
  { 0x00, 0x11, 0x11, 0x0a, 0x0a, 0x04, 0x0a, 0x0a, 0x11, 0x11, 0x00, 0x00, }, // 0x58
  { 0x00, 0x11, 0x11, 0x0a, 0x0a, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0x59
  { 0x00, 0x1f, 0x10, 0x08, 0x08, 0x04, 0x02, 0x02, 0x01, 0x1f, 0x00, 0x00, }, // 0x5a
  { 0x00, 0x1c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1c, }, // 0x5b
  { 0x00, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x00, }, // 0x5c
  { 0x00, 0x0e, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0e, }, // 0x5d
  { 0x00, 0x04, 0x0a, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x5e
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, }, // 0x5f
  { 0x00, 0x0c, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x60
  { 0x00, 0x00, 0x00, 0x0e, 0x11, 0x18, 0x16, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0x61
  { 0x00, 0x01, 0x01, 0x0d, 0x13, 0x11, 0x11, 0x11, 0x13, 0x0d, 0x00, 0x00, }, // 0x62
  { 0x00, 0x00, 0x00, 0x0e, 0x11, 0x01, 0x01, 0x01, 0x11, 0x0e, 0x00, 0x00, }, // 0x63
  { 0x00, 0x10, 0x10, 0x16, 0x19, 0x11, 0x11, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0x64
  { 0x00, 0x00, 0x00, 0x0e, 0x11, 0x11, 0x1f, 0x01, 0x11, 0x0e, 0x00, 0x00, }, // 0x65
  { 0x00, 0x18, 0x04, 0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0x66
  { 0x00, 0x00, 0x00, 0x1e, 0x11, 0x11, 0x11, 0x19, 0x16, 0x10, 0x11, 0x0e, }, // 0x67
  { 0x00, 0x01, 0x01, 0x0d, 0x13, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, }, // 0x68
  { 0x00, 0x04, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0x69
  { 0x00, 0x04, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x02, }, // 0x6a
  { 0x00, 0x01, 0x01, 0x01, 0x09, 0x05, 0x03, 0x05, 0x09, 0x11, 0x00, 0x00, }, // 0x6b
  { 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0x6c
  { 0x00, 0x00, 0x00, 0x0f, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x00, 0x00, }, // 0x6d
  { 0x00, 0x00, 0x00, 0x0d, 0x13, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, }, // 0x6e
  { 0x00, 0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0x6f
  { 0x00, 0x00, 0x00, 0x0d, 0x13, 0x11, 0x11, 0x11, 0x13, 0x0d, 0x01, 0x01, }, // 0x70
  { 0x00, 0x00, 0x00, 0x16, 0x19, 0x11, 0x11, 0x11, 0x19, 0x16, 0x10, 0x10, }, // 0x71
  { 0x00, 0x00, 0x00, 0x1a, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, }, // 0x72
  { 0x00, 0x00, 0x00, 0x0e, 0x11, 0x02, 0x0c, 0x10, 0x11, 0x0e, 0x00, 0x00, }, // 0x73
  { 0x00, 0x02, 0x02, 0x0f, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x00, 0x00, }, // 0x74
  { 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0x75
  { 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x0a, 0x0a, 0x04, 0x04, 0x00, 0x00, }, // 0x76
  { 0x00, 0x00, 0x00, 0x11, 0x15, 0x15, 0x15, 0x15, 0x15, 0x0a, 0x00, 0x00, }, // 0x77
  { 0x00, 0x00, 0x00, 0x11, 0x0a, 0x0a, 0x04, 0x0a, 0x0a, 0x11, 0x00, 0x00, }, // 0x78
  { 0x00, 0x00, 0x00, 0x11, 0x11, 0x12, 0x0a, 0x0a, 0x04, 0x04, 0x02, 0x01, }, // 0x79
  { 0x00, 0x00, 0x00, 0x1f, 0x08, 0x08, 0x04, 0x02, 0x02, 0x1f, 0x00, 0x00, }, // 0x7a
  { 0x00, 0x10, 0x08, 0x08, 0x08, 0x08, 0x04, 0x08, 0x08, 0x08, 0x08, 0x10, }, // 0x7b
  { 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, }, // 0x7c
  { 0x00, 0x02, 0x04, 0x04, 0x04, 0x04, 0x08, 0x04, 0x04, 0x04, 0x04, 0x02, }, // 0x7d
  { 0x00, 0x00, 0x00, 0x12, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x7e
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x7f
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x80
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x81
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x82
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x83
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x84
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x85
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x86
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x87
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x88
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x89
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x8a
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x8b
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x8c
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x8d
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x8e
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x8f
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x90
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x91
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x92
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x93
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x94
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x95
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x96
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x97
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x98
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x99
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x9a
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x9b
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x9c
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x9d
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x9e
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0x9f
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xa0
  { 0x00, 0x04, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0xa1
  { 0x00, 0x00, 0x08, 0x0e, 0x19, 0x05, 0x05, 0x05, 0x13, 0x0e, 0x02, 0x00, }, // 0xa2
  { 0x00, 0x08, 0x14, 0x04, 0x1e, 0x04, 0x04, 0x04, 0x16, 0x15, 0x0a, 0x00, }, // 0xa3
  { 0x00, 0x00, 0x00, 0x11, 0x0e, 0x0a, 0x0e, 0x11, 0x00, 0x00, 0x00, 0x00, }, // 0xa4
  { 0x00, 0x11, 0x11, 0x0a, 0x1f, 0x04, 0x1f, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0xa5
  { 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x00, }, // 0xa6
  { 0x00, 0x0c, 0x12, 0x02, 0x0c, 0x12, 0x0c, 0x10, 0x12, 0x12, 0x0c, 0x00, }, // 0xa7
  { 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xa8
  { 0x00, 0x0e, 0x11, 0x1d, 0x13, 0x13, 0x1d, 0x11, 0x0e, 0x00, 0x00, 0x00, }, // 0xa9
  { 0x00, 0x06, 0x05, 0x05, 0x0a, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xaa
  { 0x00, 0x00, 0x00, 0x00, 0x14, 0x0a, 0x05, 0x0a, 0x14, 0x00, 0x00, 0x00, }, // 0xab
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, }, // 0xac
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xad
  { 0x00, 0x1e, 0x21, 0x2d, 0x35, 0x2d, 0x35, 0x35, 0x1e, 0x00, 0x00, 0x00, }, // 0xae
  { 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xaf
  { 0x0c, 0x12, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xb0
  { 0x00, 0x00, 0x00, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x1f, 0x00, 0x00, 0x00, }, // 0xb1
  { 0x02, 0x05, 0x04, 0x02, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xb2
  { 0x03, 0x04, 0x03, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xb3
  { 0x0c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xb4
  { 0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x12, 0x12, 0x2e, 0x02, 0x02, 0x01, }, // 0xb5
  { 0x00, 0x1c, 0x16, 0x16, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x00, }, // 0xb6
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xb7
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x08, 0x06, }, // 0xb8
  { 0x02, 0x03, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xb9
  { 0x00, 0x06, 0x09, 0x09, 0x06, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xba
  { 0x00, 0x00, 0x00, 0x05, 0x0a, 0x14, 0x0a, 0x05, 0x00, 0x00, 0x00, 0x00, }, // 0xbb
  { 0x01, 0x09, 0x05, 0x0a, 0x0d, 0x1c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xbc
  { 0x01, 0x09, 0x05, 0x1a, 0x11, 0x08, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, }, // 0xbd
  { 0x03, 0x04, 0x07, 0x14, 0x1b, 0x14, 0x3c, 0x10, 0x00, 0x00, 0x00, 0x00, }, // 0xbe
  { 0x00, 0x04, 0x00, 0x04, 0x04, 0x02, 0x02, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xbf
  { 0x04, 0x08, 0x04, 0x04, 0x0a, 0x0a, 0x11, 0x1f, 0x11, 0x11, 0x00, 0x00, }, // 0xc0
  { 0x04, 0x02, 0x04, 0x04, 0x0a, 0x0a, 0x11, 0x1f, 0x11, 0x11, 0x00, 0x00, }, // 0xc1
  { 0x04, 0x0a, 0x04, 0x04, 0x0a, 0x0a, 0x11, 0x1f, 0x11, 0x11, 0x00, 0x00, }, // 0xc2
  { 0x0a, 0x05, 0x04, 0x04, 0x0a, 0x0a, 0x11, 0x1f, 0x11, 0x11, 0x00, 0x00, }, // 0xc3
  { 0x0a, 0x00, 0x04, 0x04, 0x0a, 0x0a, 0x11, 0x1f, 0x11, 0x11, 0x00, 0x00, }, // 0xc4
  { 0x04, 0x0a, 0x04, 0x04, 0x0a, 0x0a, 0x11, 0x1f, 0x11, 0x11, 0x00, 0x00, }, // 0xc5
  { 0x00, 0x1e, 0x06, 0x05, 0x05, 0x1f, 0x05, 0x05, 0x05, 0x1d, 0x00, 0x00, }, // 0xc6
  { 0x00, 0x0c, 0x12, 0x01, 0x01, 0x01, 0x01, 0x12, 0x0c, 0x08, 0x06, 0x00, }, // 0xc7
  { 0x02, 0x04, 0x1f, 0x01, 0x01, 0x0f, 0x01, 0x01, 0x01, 0x1f, 0x00, 0x00, }, // 0xc8
  { 0x08, 0x04, 0x1f, 0x01, 0x01, 0x0f, 0x01, 0x01, 0x01, 0x1f, 0x00, 0x00, }, // 0xc9
  { 0x04, 0x0a, 0x1f, 0x01, 0x01, 0x0f, 0x01, 0x01, 0x01, 0x1f, 0x00, 0x00, }, // 0xca
  { 0x0a, 0x00, 0x1f, 0x01, 0x01, 0x0f, 0x01, 0x01, 0x01, 0x1f, 0x00, 0x00, }, // 0xcb
  { 0x02, 0x04, 0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00, }, // 0xcc
  { 0x08, 0x04, 0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00, }, // 0xcd
  { 0x04, 0x0a, 0x00, 0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00, }, // 0xce
  { 0x0a, 0x00, 0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00, }, // 0xcf
  { 0x00, 0x07, 0x09, 0x11, 0x11, 0x13, 0x11, 0x11, 0x09, 0x07, 0x00, 0x00, }, // 0xd0
  { 0x0a, 0x05, 0x11, 0x13, 0x15, 0x15, 0x19, 0x19, 0x11, 0x11, 0x00, 0x00, }, // 0xd1
  { 0x02, 0x04, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xd2
  { 0x08, 0x04, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xd3
  { 0x04, 0x0a, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xd4
  { 0x14, 0x0a, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xd5
  { 0x0a, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xd6
  { 0x00, 0x00, 0x00, 0x11, 0x0a, 0x04, 0x0a, 0x11, 0x00, 0x00, 0x00, 0x00, }, // 0xd7
  { 0x00, 0x2c, 0x32, 0x12, 0x1a, 0x16, 0x16, 0x12, 0x13, 0x0d, 0x00, 0x00, }, // 0xd8
  { 0x02, 0x04, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xd9
  { 0x08, 0x04, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xda
  { 0x04, 0x0a, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xdb
  { 0x0a, 0x05, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xdc
  { 0x08, 0x04, 0x11, 0x11, 0x0a, 0x0a, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0xdd
  { 0x00, 0x02, 0x02, 0x0e, 0x12, 0x12, 0x12, 0x12, 0x0e, 0x02, 0x02, 0x00, }, // 0xde
  { 0x00, 0x0c, 0x12, 0x12, 0x12, 0x0e, 0x12, 0x12, 0x12, 0x0a, 0x02, 0x02, }, // 0xdf
  { 0x02, 0x04, 0x00, 0x0e, 0x11, 0x18, 0x16, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0xe0
  { 0x08, 0x04, 0x00, 0x0e, 0x11, 0x18, 0x16, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0xe1
  { 0x04, 0x0a, 0x00, 0x0e, 0x11, 0x18, 0x16, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0xe2
  { 0x0a, 0x05, 0x00, 0x0e, 0x11, 0x18, 0x16, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0xe3
  { 0x00, 0x0a, 0x00, 0x0e, 0x11, 0x18, 0x16, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0xe4
  { 0x04, 0x0a, 0x04, 0x0e, 0x11, 0x18, 0x16, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0xe5
  { 0x00, 0x00, 0x00, 0x0a, 0x15, 0x14, 0x1e, 0x05, 0x15, 0x0e, 0x00, 0x00, }, // 0xe6
  { 0x00, 0x00, 0x00, 0x0e, 0x11, 0x01, 0x01, 0x11, 0x0e, 0x08, 0x06, 0x00, }, // 0xe7
  { 0x02, 0x04, 0x00, 0x0e, 0x11, 0x11, 0x1f, 0x01, 0x11, 0x0e, 0x00, 0x00, }, // 0xe8
  { 0x08, 0x04, 0x00, 0x0e, 0x11, 0x11, 0x1f, 0x01, 0x11, 0x0e, 0x00, 0x00, }, // 0xe9
  { 0x04, 0x0a, 0x00, 0x0e, 0x11, 0x11, 0x1f, 0x01, 0x11, 0x0e, 0x00, 0x00, }, // 0xea
  { 0x00, 0x0a, 0x00, 0x0e, 0x11, 0x11, 0x1f, 0x01, 0x11, 0x0e, 0x00, 0x00, }, // 0xeb
  { 0x02, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0xec
  { 0x08, 0x04, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0xed
  { 0x04, 0x0a, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0xee
  { 0x00, 0x0a, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, }, // 0xef
  { 0x05, 0x02, 0x05, 0x08, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xf0
  { 0x0a, 0x05, 0x00, 0x00, 0x0d, 0x13, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, }, // 0xf1
  { 0x02, 0x04, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xf2
  { 0x08, 0x04, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xf3
  { 0x04, 0x0a, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xf4
  { 0x0a, 0x05, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xf5
  { 0x00, 0x0a, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, }, // 0xf6
  { 0x00, 0x00, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, }, // 0xf7
  { 0x00, 0x00, 0x00, 0x2c, 0x12, 0x1a, 0x16, 0x12, 0x13, 0x0c, 0x00, 0x00, }, // 0xf8
  { 0x02, 0x04, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0xf9
  { 0x08, 0x04, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0xfa
  { 0x04, 0x0a, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0xfb
  { 0x00, 0x0a, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x19, 0x16, 0x00, 0x00, }, // 0xfc
  { 0x08, 0x04, 0x00, 0x11, 0x11, 0x12, 0x0a, 0x0a, 0x04, 0x04, 0x02, 0x01, }, // 0xfd
  { 0x00, 0x00, 0x02, 0x02, 0x0e, 0x12, 0x12, 0x12, 0x12, 0x0e, 0x02, 0x02, }, // 0xfe
  { 0x00, 0x0a, 0x00, 0x11, 0x11, 0x12, 0x0a, 0x0a, 0x04, 0x04, 0x02, 0x01, }, // 0xff
}; // SHINONOME_HANKAKU
