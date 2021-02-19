#pragma once

#include "../engine/button.h"
#include "../engine/image.h"

class ExitButton :public Button{
private:
	Image* image;

public:
	ExitButton();

protected:
	virtual void createChildren();
	virtual void layout();
	virtual void onTouchDown();
	virtual void onTouchUp();
	virtual void onClick();
};