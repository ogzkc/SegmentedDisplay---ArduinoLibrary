#ifndef SegmentedDisplay_H
#define SegmentedDisplay_H

#if ARDUINO >= 100
#include "Arduino.h"
#endif

#define COMMON_ANODE true
#define COMMON_CATHODE false

class SegmentedDisplay {
public:
	SegmentedDisplay(bool isCommonAnode, uint8_t pinA, uint8_t pinB, uint8_t pinC, uint8_t pinD, uint8_t pinE, uint8_t pinF, uint8_t pinG, uint8_t pinDot);
	void begin(void);
	void writeLetter(char letter);
	void writeNumber(int number);
	void setCommonPin(uint8_t pinCommon);
	void setBrightness(int brightness);
private:
	uint8_t _pinA;
	uint8_t _pinB;
	uint8_t _pinC;
	uint8_t _pinD;
	uint8_t _pinE;
	uint8_t _pinF;
	uint8_t _pinG;
	uint8_t _pinDot;
	uint8_t _pinCommon = -1;
	bool _isCommonAnode;
};
#endif
