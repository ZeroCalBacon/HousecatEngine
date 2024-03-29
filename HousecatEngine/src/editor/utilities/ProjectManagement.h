#pragma once

#include <string>
#include <memory>
#include <filesystem>
#include <sol/sol.hpp>

#include "SDLUtility.h"
#include "LuaExporter.h"

#include "../ui/EditorCanvas.h"
#include "../../assetmanager/AssetManager.h"

class ProjectManagement {
private:
	void LoadMap(const AssetManagerPtr& assetManager, const std::string& fileName);
	void SaveMap(std::filesystem::path fileName);

public:
	ProjectManagement();
	~ProjectManagement();
	
	void OpenProject(sol::state& lua, const std::string& fileName, EditorRenderer& renderer, std::shared_ptr<EditorCanvas>& canvas,
		const AssetManagerPtr& assetManager, std::vector<std::string>& assetID, std::vector<std::string>& assetFilePath,
		int& tileSize);
	 
	void SaveProject(const std::string& fileName, std::vector<std::string>& assetID, std::vector<std::string>& assetFilePath,
		const int& canvasWidth, const int& canvasHeight, const int& tileSize);

	void SaveAsLua(const std::string& fileName, std::vector<std::string>& assetID, std::vector<std::string>& assetFilePath, const int& tileSize);

};

