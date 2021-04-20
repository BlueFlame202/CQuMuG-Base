#pragma once

#define SEED_MESH_2D		0
#define SEED_MESH_3D		1

#include <vector>
#include <queue>
#include <gl/glew.h>

#include "../../Utils/GLDebugger.h"
#include "../Shader/Shader.h"

class Mesh
{
private:
	GLuint m_vao;
	GLuint m_vbo;
	GLuint m_ebo;

	bool m_hasTex;

	int m_ic;
	int m_vc;

public:
	Mesh(std::vector<float> pos, std::vector<float> col, std::vector<int> indices, int meshType, int posLoc, int colLoc);
	Mesh(std::queue<float> pos, std::queue<float> col, std::vector<int> indices, int meshType, int posLoc, int colLoc);
	~Mesh();

	void Render(Shader * shader, GLenum shape);
};