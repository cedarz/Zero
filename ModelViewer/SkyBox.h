#ifndef SKY_BOX_H
#define SKY_BOX_H
#include "Camera.h"
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

class SkyBox
{
public:
	static SkyBox* Instance()
	{
		static SkyBox inst;
		return &inst;
	}

	void init(char* folder);
	void update(glm::mat4 VP_matr);
	void draw();

private:
	SkyBox();
	~SkyBox();

	GLuint VAO_skybox;
	GLuint VBO_vertices_textures;

	GLuint cube_texture_id;
	GLuint createCubeTexture(char* folder);

	GLuint skybox_shaders;

	glm::mat4 VP_matrix; // WITHOUT model for skybox


};

#endif // !SKY_BOX_H

