#pragma once

#include "../engine/pixelparticle.h"
#include "../engine/emitter.h"

class BloodParticle :public Shrinking{
public:
	static Emitter::Factory* FACTORY;

	BloodParticle();

	void reset(float x, float y);
	
	virtual void update();
};