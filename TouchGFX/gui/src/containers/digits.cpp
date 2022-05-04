#include <gui/containers/digits.hpp>
#include <touchgfx/Color.hpp>

digits::digits()
{
	this->oldCursorPosition = 0;
	this->newCursorPosition = 0;

    this->boxes.add(this->decimalsBox);
    this->boxes.add(this->onesBox);
    this->boxes.add(this->tensBox);
    this->boxes.add(this->hundredsBox);

    this->digitsTab.add(this->decimals);
    this->digitsTab.add(this->ones);
    this->digitsTab.add(this->tens);
    this->digitsTab.add(this->hundreds);

    this->values.add(1);
    this->values.add(2);
    this->values.add(3);
    this->values.add(4);
    this->updateValue();
}

void digits::initialize()
{
    digitsBase::initialize();
}

void digits::changeCursorPosition(int direction)
{
	this->newCursorPosition += direction;

	if (this->newCursorPosition == -1) this->newCursorPosition = 0;
	else if (this->newCursorPosition == 4) this->newCursorPosition = 3;
}

void digits::changeValue(int value)
{
	switch (value) {
	case 1:
		/*for (int i = 0; i < 4; i++)
		{
			this->values[newCursorPosition + i]++;
			if (this->values[newCursorPosition + i] == 10)
			{
				this->values[newCursorPosition + i] = 0;
				if (!(0 <= newCursorPosition + i && newCursorPosition + i < 3))
				{
					break;
				}
			}
			else break;
		}*/
		if (this->values[newCursorPosition] < 9) this->values[newCursorPosition]++;
		break;
	case -1:
		/*for (int i = 0; i < 4; i++)
		{
			this->values[newCursorPosition + i]--;
			if (this->values[newCursorPosition + i] == -1)
			{
				this->values[newCursorPosition + i] = 9;
			}
			else break;
		}*/
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
	int decimals = (int) (value - hundreds * 100 - tens * 10 - ones) * 10;

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
	boxes[newCursorPosition].setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
}

void digits::resetCursor()
{
	this->newCursorPosition = 0;
	boxes[newCursorPosition].setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
}
