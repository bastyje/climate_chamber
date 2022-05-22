#include <gui/containers/digits.hpp>
#include <touchgfx/Color.hpp>

digits::digits()
{
}

void digits::initialize()
{
    digitsBase::initialize();

	this->oldCursorPosition = 0;
	this->newCursorPosition = 0;

    this->boxes.add(&this->decimalsBox);
    this->boxes.add(&this->onesBox);
    this->boxes.add(&this->tensBox);
    this->boxes.add(&this->hundredsBox);

    this->digitsTab.add(this->decimals);
    this->digitsTab.add(this->ones);
    this->digitsTab.add(this->tens);
    this->digitsTab.add(this->hundreds);

    this->values.add(0);
    this->values.add(0);
    this->values.add(0);
    this->values.add(0);
    this->updateValue();

    this->onesBox.setVisible(false);
    this->tensBox.setVisible(false);
    this->hundredsBox.setVisible(false);
    this->decimalsBox.setVisible(false);

	this->onesBox.invalidate();
	this->tensBox.invalidate();
	this->hundredsBox.invalidate();
	this->decimalsBox.invalidate();
}

void digits::changeCursorPosition(int direction)
{
	this->resetCursor();

	this->newCursorPosition += direction;

	if (this->newCursorPosition == -1) this->newCursorPosition = 0;
	else if (this->newCursorPosition == 4) this->newCursorPosition = 3;

	this->showCursor();
}

void digits::changeValue(int value)
{
	switch (value) {
	case 1:
		if (this->values[newCursorPosition] < 9) this->values[newCursorPosition]++;
		break;
	case -1:
		if (this->values[newCursorPosition] > 0) this->values[newCursorPosition]--;
		break;
	}
	this->updateValue();
}

void digits::initializeValue(float value)
{
	int hundreds = (int) value / 100;
	int tens = (int) (value - hundreds * 100) / 10;
	int ones = (int) (value - hundreds * 100 - tens * 10);
	int decimals = (int) ((value - hundreds * 100 - tens * 10 - ones) * 10);

	uploadValue(hundreds, tens, ones, decimals);
}

void digits::uploadValue(int hundreds, int tens, int ones, int decimals)
{
	this->values[3] = hundreds;
	this->values[2] = tens;
	this->values[1] = ones;
	this->values[0] = decimals;

	this->updateValue();
}

void digits::updateValue()
{
	touchgfx::Unicode::snprintf(decimalsBuffer, DECIMALS_SIZE, "%d", this->values[0]);
	touchgfx::Unicode::snprintf(onesBuffer, ONES_SIZE, "%d", this->values[1]);
	touchgfx::Unicode::snprintf(tensBuffer, TENS_SIZE, "%d", this->values[2]);
	touchgfx::Unicode::snprintf(hundredsBuffer, HUNDREDS_SIZE, "%d", this->values[3]);

	this->hundreds.invalidate();
	this->tens.invalidate();
	this->ones.invalidate();
	this->decimals.invalidate();
}

void digits::showCursor()
{
	this->boxes[newCursorPosition]->setVisible(true);
	this->boxes[newCursorPosition]->invalidate();
}

void digits::resetCursor()
{
	this->boxes[newCursorPosition]->setVisible(false);
	this->boxes[newCursorPosition]->invalidate();
}

float digits::getValue()
{
	float ret = (((float) this->values[3]) * 100 + ((float) this->values[2]) * 10 + ((float) this->values[1])  + ((float) this->values[0]) / 10);
	return ret;
}

