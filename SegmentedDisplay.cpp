#include "SegmentedDisplay.h"

SegmentedDisplay::SegmentedDisplay(bool isCommonAnode, uint8_t pinA, uint8_t pinB, uint8_t pinC, uint8_t pinD, uint8_t pinE, uint8_t pinF, uint8_t pinG, uint8_t pinDot) {
	_isCommonAnode = isCommonAnode;
	_pinA = pinA;
	_pinB = pinB;
	_pinC = pinC;
	_pinD = pinD;
	_pinE = pinE;
	_pinF = pinF;
	_pinG = pinG;
	_pinDot = pinDot;
}

void SegmentedDisplay::begin(void) {
	pinMode(_pinA, OUTPUT);
	pinMode(_pinB, OUTPUT);
	pinMode(_pinC, OUTPUT);
	pinMode(_pinD, OUTPUT);
	pinMode(_pinE, OUTPUT);
	pinMode(_pinF, OUTPUT);
	pinMode(_pinG, OUTPUT);
	pinMode(_pinDot, OUTPUT);
}

void SegmentedDisplay::writeLetter(char letter) {
	switch (letter) {
	case 'A':
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 'B':
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 'C':
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinC, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? HIGH : LOW);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 'D':
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? HIGH : LOW);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 'E':
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinC, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 'F':
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinC, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinD, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 'G':
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 'H':
		digitalWrite(_pinA, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 'I':
		digitalWrite(_pinA, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinE, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinF, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinG, _isCommonAnode ? HIGH : LOW);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 'J':
		digitalWrite(_pinA, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinF, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinG, _isCommonAnode ? HIGH : LOW);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	default:
		digitalWrite(_pinA, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinB, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinC, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinD, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinE, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinF, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinG, _isCommonAnode ? HIGH : LOW);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	}
}

void SegmentedDisplay::writeNumber(int number) {
	switch (number) {
	case 0:
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? HIGH : LOW);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 1:
		digitalWrite(_pinA, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinE, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinF, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinG, _isCommonAnode ? HIGH : LOW);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 2:
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 3:
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinF, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 4:
		digitalWrite(_pinA, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinE, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 5:
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 6:
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 7:
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinE, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinF, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinG, _isCommonAnode ? HIGH : LOW);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 8:
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	case 9:
		digitalWrite(_pinA, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinB, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinC, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinD, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinE, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinF, _isCommonAnode ? LOW : HIGH);
		digitalWrite(_pinG, _isCommonAnode ? LOW : HIGH);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	default:
		digitalWrite(_pinA, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinB, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinC, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinD, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinE, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinF, _isCommonAnode ? HIGH : LOW);
		digitalWrite(_pinG, _isCommonAnode ? HIGH : LOW);

		digitalWrite(_pinDot, _isCommonAnode ? HIGH : LOW);
		break;
	}
}

void SegmentedDisplay::setCommonPin(uint8_t pinCommon) {
	if (_isCommonAnode) {
		_pinCommon = pinCommon;
		pinMode(_pinCommon, OUTPUT);
	}
}

void SegmentedDisplay::setBrightness(int brightness) {
	if (_pinCommon != -1)
		analogWrite(_pinCommon, brightness);
}
