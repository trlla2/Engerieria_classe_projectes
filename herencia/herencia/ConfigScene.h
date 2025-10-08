#pragma once
#pragma once
#include "Scene.h"

class ConfigScene : public Scene
{
public:



	// Inherited via Scene
	void Start() override;

	void Update() override;

	void Draw() override;

	void End() override;

};

