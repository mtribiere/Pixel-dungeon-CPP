#pragma once

#include "../engine/image.h"

class BusyIndicator :public Image{
public:
	BusyIndicator();
	virtual void update();
};