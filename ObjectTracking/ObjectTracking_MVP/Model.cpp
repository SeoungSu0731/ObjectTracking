#include "Model.h"

bool Model::LoadImage(const std::string& strPath)
{
    return false;
}

bool Model::SaveImage(const std::string& strPath)
{
    return false;
}

cv::Mat* Model::getImagePtr()
{
    return &m_image;
}
