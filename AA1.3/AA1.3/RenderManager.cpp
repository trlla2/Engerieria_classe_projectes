#include "RenderManager.h"

void RenderManager::Draw() {
	for (Renderer* r : renderers) {
		r->Draw();
	}
}

void RenderManager::AddToRenderManager(Renderer* r)
{
	renderers.push_back(r);

}

RenderManager::~RenderManager()
{
	for (Renderer* r : renderers) {
		delete r;
	}
}
