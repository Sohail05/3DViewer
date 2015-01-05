#include "object3d.h"


Object3D::Object3D(){

    location    = vec3(0, 0, 0);
    rotation    = vec3(0, 0, 0);
    scale       = vec3(0, 0, 0);

}

Object3D::Object3D(vector<vec3> vertices){

    location    = vec3(0, 0, 0);
    rotation    = vec3(0, 0, 0);
    scale       = vec3(0, 0, 0);

    points = vertices;

}

void Object3D::AddPoint(vec3 vertex){

points.push_back( vertex );

}

void Object3D::AddPoint(float x, float y, float z){

vec3 vertex(x , y , z);

points.push_back( vertex );

}

