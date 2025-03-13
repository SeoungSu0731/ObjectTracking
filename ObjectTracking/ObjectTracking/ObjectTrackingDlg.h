
// ObjectTrackingDlg.h : header file
//

#pragma once
#include "ImageLibrary.h"
#include "ObjectTrackingController.h"
// CObjectTrackingDlg dialog
class CObjectTrackingDlg : public CDialogEx
{
	// Construction
public:
	CObjectTrackingDlg(CWnd* pParent = nullptr);	// standard constructor

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OBJECTTRACKING_DIALOG };
#endif

protected:
	HICON m_hIcon;
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedBtnImgLoad();
	afx_msg void OnBnClickedBtnImgSave();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
	afx_msg void OnDestroy();
	DECLARE_MESSAGE_MAP()

private:
	ObjectTrackingController controller;
	CStatic m_imageControl;

public:
	BITMAPINFO* m_pBitmapInfo{};
	CImage m_image{};
	void CreateBitmapInfo(int nWidth, int nHeight, int nBpp); // Bitmap 정보를 생성하는 함수.
	void DrawImage(); // 그리는 작업을 수행하는 함수.

};
