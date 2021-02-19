#pragma once

#include "../engine/pixelparticle.h"
#include "../engine/emitter.h"

class FlameParticle :public Shrinking{
public:
	static Emitter::Factory* FACTORY;

	FlameParticle();
	void reset(float x, float y);
	virtual void update();
};