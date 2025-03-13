#pragma once
#include "Model.h"
#include "View.h"

class Presenter
{
private:
	Model* model;
	View* view;

public:
	Presenter(Model* model, View* view);
	void OnLoadImage(const std::string& strPath);
	void OnSaveImage(const std::string& strPath);
};

