#include <gui/containers/digits.hpp>
#include <touchgfx/Color.hpp>

digits::digits()
{
}

void digits::initialize()
{
    digitsBase::initialize();

	this->cursorPosition = 0;

    this->boxes.add(&this->decimalsBox);
    this->boxes.add(&this->onesBox);
    this->boxes.add(&this->tensBox);
    this->boxes.add(&this->hundredsBox);

    this->digitsTab.add(this->decimals);
    this->digitsTab.add(this->ones);
    this->digitsTab.add(this->tens);
    this->digitsTab.add(this->hundreds);

    this->value = 0;
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

	this->cursorPosition += direction;

	if (this->cursorPosition == this->minCursor - 1)
		this->cursorPosition = this->minCursor;
	else if (this->cursorPosition == this->maxCursor + 1)
		this->cursorPosition = this->maxCursor;

	this->showCursor();
}

void digits::changeValue(int value)
{
	switch (value) {
	case 1:
		this->increase();
		break;
	case -1:
		this->decrease();
		break;
	}
	this->updateValue();
}

#include <math.h>

void digits::increase()
{
	float difference = 1 * pow(10, cursorPosition - 1);
	if (this->value + difference <= this->max) this->value += difference;
}

void digits::decrease()
{
	float difference = 1 * pow(10, cursorPosition - 1);
	if (this->value - difference >= this->min) this->value -= difference;
}

void digits::initializeValue(float value)
{
	this->value = value;
	updateValue();
}

void digits::updateValue()
{
	int hundreds = (int) abs(this->value) / 100;
	int tens = (int) (abs(this->value) - hundreds * 100) / 10;
	int ones = (int) abs(this->value) - hundreds * 100 - tens * 10;
	int decimals = (int) ((abs(this->value) - hundreds * 100 - tens * 10 - ones) * 10);

	touchgfx::Unicode::snprintf(decimalsBuffer, DECIMALS_SIZE, "%d", decimals);
	touchgfx::Unicode::snprintf(onesBuffer, ONES_SIZE, "%d", ones);
	touchgfx::Unicode::snprintf(tensBuffer, TENS_SIZE, "%d", tens);
	touchgfx::Unicode::snprintf(hundredsBuffer, HUNDREDS_SIZE, "%d", hundreds);
	this->minus.setVisible(this->value < 0);

	this->hundreds.invalidate();
	this->tens.invalidate();
	this->ones.invalidate();
	this->decimals.invalidate();
	this->minus.invalidate();
}

void digits::showCursor()
{
	this->boxes[cursorPosition]->setVisible(true);
	this->boxes[cursorPosition]->invalidate();
}

void digits::resetCursor()
{
	this->boxes[cursorPosition]->setVisible(false);
	this->boxes[cursorPosition]->invalidate();
}

void digits::hideCursor()
{
	this->boxes[cursorPosition]->setVisible(false);
	this->boxes[cursorPosition]->invalidate();
	this->cursorPosition = this->minCursor;
}

float digits::getValue()
{
	return this->value;
}

void digits::setCursorRange(int min, int max)
{
	this->minCursor = min;
	this->maxCursor = max;
	this->cursorPosition = min;
	if (min > 0)
	{
		this->dot.setVisible(false);
		this->decimals.setVisible(false);
	}
}

void digits::setValueRange(float min, float max)
{
	this->max = max;
	this->min = min;
}


