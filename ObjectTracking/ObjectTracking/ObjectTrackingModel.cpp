#include "pch.h"
#include "ObjectTrackingModel.h"

// �̹��� �ε� ��ȯ
bool ObjectTrackingModel::LoadImage(const std::string& filePath) 
{
    image = cv::imread(filePath);
    return !image.empty();
}
// �̹��� ���� ��ȯ
bool ObjectTrackingModel::SaveImage(const std::string& filePath)
{
    if (image.empty()) return false;
    return cv::imwrite(filePath, image);
}
// �̹��� cv::Mat ��ȯ
cv::Mat ObjectTrackingModel::GetImage() const 
{
    return image;
}