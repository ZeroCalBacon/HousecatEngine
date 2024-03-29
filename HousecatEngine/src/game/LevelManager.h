#pragma once

#include <SDL.h>

#include <memory>

#include <sol/sol.hpp>

#include <vector>

#include "CollisionMap.h"

#include "../ecs/ECS.h"
#include "../assetmanager/AssetManager.h"

class LevelManager {
private:
	std::vector<std::vector<bool>> collisionMap;
public:
	LevelManager();
	~LevelManager();

	void LoadLevel(const std::unique_ptr<Housecat>& housecat, SDL_Renderer* rendererGame, const std::unique_ptr<AssetManager>& assetManager, sol::state& lua, int level);
};