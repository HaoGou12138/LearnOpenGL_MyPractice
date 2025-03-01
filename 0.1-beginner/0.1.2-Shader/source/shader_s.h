#ifndef  SHADER_H
#define SHADER_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:

	Shader(const char* vertexPath, const char* fragmentPath);
	~Shader();

	unsigned int ID;
	void use();
	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
	void set4Float(const std::string& name, float v0, float v1, float v2, float v3) const;
private:
	void checkCompileErrors(unsigned int shader, std::string type);
};
#endif // ! SHADER_H
