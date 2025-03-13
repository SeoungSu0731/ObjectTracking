#pragma once
#include "ObjectTrackingModel.h"

class ObjectTrackingController
{
private:
    ObjectTrackingModel model;
public:
    bool LoadImage(const std::string& filePath);
    bool SaveImage(const std::string& filePath);
    cv::Mat GetImage() const;
    int GetWidth() const;
    int GetHeight() const;
    int GetBpp() const;
};

