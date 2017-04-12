#pragma once


class CameraParams
{
public:
    CameraParams(float f, float cx, float cy, int w, int h)
        : f(f)
        , cx(cx)
        , cy(cy)
        , w(w)
        , h(h)
    {
    }

    void scale(float c)
    {
        f *= c, cx *= c, cy *= c, w = int(w * c), h = int(h * c);
    }

public:
    float f, cx, cy;
    int w, h;
};