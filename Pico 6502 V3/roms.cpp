// 
// Author: Rien Matthijsse
// 

#include "roms.h"

#include "memory.h"
#include "ewoz.h"
#include "mon_ext.h"
#include "msbasic.h"

#define MAX_ROMS  4
#define ROM_FOLDER  "ROM"

// ROM image:
typedef struct _sROMImage {
  char     name[16];
  uint16_t startAddress;
  uint16_t romsize;
  uint8_t  *image;
} sROMImage;


/// <summary>
///  the ROM images to load
/// </summary>
sROMImage ROMs[] = {
  { "Ewoz v1.2",    EWOZ_START,    EWOZ_SIZE,    ewoz_bin },
  { "Vectors",      0xFFFA,        0X0006,       vectors_bin },
  { "Disasm v1.0",  MON_EXT_START, MON_EXT_SIZE, mon_ext_bin },
  { "Msbasic v1.1", MSBASIC_START, MSBASIC_SIZE, msbasic_bin }
};

/// <summary>
/// 
/// </summary>
/// <param name="vROMname"></param>
/// <returns></returns>
uint8_t* readROM(String vROMname) {
 // TBI

  return 0;
}

/// <summary>
/// 
/// </summary>
/// <param name="vROM"></param>
/// <param name="startAddress"></param>
/// <param name="romSize"></param>
/// <returns></returns>
bool loadROM(uint8_t *vROM, uint16_t startAddress, uint16_t romSize) {
  // copy ROM in memory space
  for (uint16_t i = 0; i < romSize; i++) {
    mem[i + startAddress] = vROM[i];
  }

  return true;
}

/// <summary>
/// 
/// </summary>
/// <returns></returns>
bool loadROMS() {
  for (uint8_t i = 0; i < MAX_ROMS; i++) {
    if (strcmp(ROMs[i].name, "") != 0) {
      Serial.printf("ROM: %16s\t@0X%04X\t[0X%04x]\n", ROMs[i].name, ROMs[i].startAddress,ROMs[i].romsize);
      loadROM(ROMs[i].image, ROMs[i].startAddress, ROMs[i].romsize);
    }
    else
      break;
  }

  return true;
}
