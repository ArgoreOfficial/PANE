#version 330
uniform sampler2D iChannel0;

uniform vec3 direction;

#define PI 3.141592653
#define TWOPI (2*PI)

void main()
{

    vec3 offset = vec3(gl_TexCoord[0].xy-0.5,0)*2;
    vec3 d = normalize(direction + offset);
    vec2 tx = vec2(0.5 + atan(d.z, sqrt(d.x*d.x + d.y*d.y))/TWOPI, 0.5 + atan(d.y, d.x)/TWOPI);

    vec4 c = texture2D( iChannel0, tx);

    gl_FragColor = c*gl_Color;
}