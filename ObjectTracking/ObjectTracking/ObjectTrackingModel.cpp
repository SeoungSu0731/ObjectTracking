#include "pch.h"
#include "ObjectTrackingModel.h"

// 이미지 로드 반환
bool ObjectTrackingModel::LoadImage(const std::string& filePath) 
{
    image = cv::imread(filePath);
    return !image.empty();
}
// 이미지 저장 반환
bool ObjectTrackingModel::SaveImage(const std::string& filePath)
{
    if (image.empty()) return false;
    return cv::imwrite(filePath, image);
}
// 이미지 cv::Mat 반환
cv::Mat ObjectTrackingModel::GetImage() const 
{
    return image;
}