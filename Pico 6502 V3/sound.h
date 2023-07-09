// sound.h

#ifndef _SOUND_h
#define _SOUND_h

#include "arduino.h"
#include "pins.h"

void initSound();
void SoundReset();
void SoundSetDuration(uint8_t);
void SoundSetNote(uint8_t);
boolean SoundPushTheNote();
boolean SoundQueueIsEmpty();
boolean SoundQueueIsFull();

#endif

