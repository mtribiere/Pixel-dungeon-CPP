#pragma once

#include "../engine/image.h"

class CheckedCell :public Image{
private:
	float alpha;

public:
	CheckedCell(int pos);

	virtual void update();
};