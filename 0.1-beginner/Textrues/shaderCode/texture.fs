#version 330 core
out vec4 FragColor;

in vec3 myColor;
in vec2 TexCoord;

uniform sampler2D texture0;
uniform sampler2D texture1;

void main()
{
    FragColor = mix(texture(texture0, TexCoord), texture(texture1, TexCoord), 0.5) * vec4(myColor, 1.0);
}