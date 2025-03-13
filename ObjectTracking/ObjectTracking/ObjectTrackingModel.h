#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>

class ObjectTrackingModel
{
private:
    cv::Mat image;
public:
    bool LoadImage(const std::string& filePath);
    bool SaveImage(const std::string& filePath);
    cv::Mat GetImage() const;
};

