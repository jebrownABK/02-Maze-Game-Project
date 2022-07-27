#pragma once
#include "PlacableActor.h"

class Blackhole : public PlacableActor
{
public:
	Blackhole(int x, int y)
		: PlacableActor(x, y)
	{

	}

	virtual ActorType GetType() override { return ActorType::Blackhole; }
	virtual void Draw() override;
};