#include "pch.h"
#include "ObjectTrackingController.h"

bool ObjectTrackingController::LoadImage(const std::string& filePath)
{
    return model.LoadImage(filePath);
}

bool ObjectTrackingController::SaveImage(const std::string& filePath)
{
    return model.SaveImage(filePath);
}

cv::Mat ObjectTrackingController::GetImage() const
{
    return model.GetImage();
}

int ObjectTrackingController::GetWidth() const
{
    return GetImage().empty() ? 0 : GetImage().cols;
}

int ObjectTrackingController::GetHeight() const
{
    return GetImage().empty() ? 0 : GetImage().rows;
}

int ObjectTrackingController::GetBpp() const
{
    return  GetImage().empty() ? 0 : GetImage().channels();
}