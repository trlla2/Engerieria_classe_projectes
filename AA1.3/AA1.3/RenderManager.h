#pragma once
#include <vector>
#include "Renderer.h"

class RenderManager
{
private:
	std::vector <Renderer*> renderers;
public:
	void Draw();
	void AddToRenderManager(Renderer* r);
	~RenderManager();
};

