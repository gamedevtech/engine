#pragma once

#define HEIGHTMAP_FILE_DIR "../res/heightmaps/"

#include <string>
#include <iostream>
#include <fstream>

#include "Mesh.h"

#define RAW_WIDTH 257
#define RAW_HEIGHT 257

#define HEIGHTMAP_X 16.0f
#define HEIGHTMAP_Y 16.0f
#define HEIGHTMAP_Z 1.25f
#define HEIGHTMAP_TEX_X 1.0f / 16.0f
#define HEIGHTMAP_TEX_Z 1.0f / 16.0f

namespace gfx {

class HeightMap : public Mesh {
public:
	HeightMap(std::string filename);
	~HeightMap(void);
};

};