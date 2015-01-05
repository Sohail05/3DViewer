#ifndef OBJECT3D_H
#define OBJECT3D_H

#include <glm\glm.hpp>
#include <vector>


using namespace std;
using namespace glm;

class Object3D{

private:

vec3 location;
vec3 rotation;
vec3 scale;

public:
vector<vec3> points;

Object3D();
Object3D(vector<vec3>);
void AddPoint(vec3);
void AddPoint(float , float , float);

};

#endif // OBJECT3D_H
