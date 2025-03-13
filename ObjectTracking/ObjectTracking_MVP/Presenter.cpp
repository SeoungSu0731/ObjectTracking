#include "Presenter.h"

Presenter::Presenter(Model* model, View* view)
	:model(model), view(view)
{
}

void Presenter::OnLoadImage(const std::string& strPath)
{
	if (model->LoadImage(strPath))
	{
		view->DisplayImage(model->getImagePtr());
	}
}

void Presenter::OnSaveImage(const std::string& strPath)
{
	model->SaveImage(strPath);
}
