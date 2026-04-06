#pragma once
namespace Render {
    struct Color
    {
        float r = 1.0f;
        float g = 1.0f;
        float b = 1.0f;
        Color() = default;
        Color(float r, float g, float b) : r(r), g(g), b(b) {}
    };

    struct Vector3
    {
        float x = 0.0f;
        float y = 0.0f;
        float z = 0.0f;
        Vector3() = default;
        Vector3(float x, float y, float z) : x(x), y(y), z(z) {}
    };
}