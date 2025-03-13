#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <string>

class Model
{
private:
	cv::Mat m_image;;

public:
	bool LoadImage(const std::string& strPath);
	bool SaveImage(const std::string& strPath);
	cv::Mat* getImagePtr();
};

