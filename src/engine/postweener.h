#pragma once

#include "../engine/tweener.h"
#include "../pd/define.h"

class Visual;

class PosTweener :public Tweener{
public:
	Visual* visual;

	PointF start;
	PointF end;

	PosTweener(Visual* visual, PointF pos, float time);

protected:
	virtual void updateValues(float progress);
};