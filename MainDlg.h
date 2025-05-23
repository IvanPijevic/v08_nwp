#pragma once

#include "resource.h"	

class MainDlg : public CDialog
{
public:
	MainDlg(CWnd* pParent = NULL);
	enum { IDD = IDD_V8_DIALOG };

	CListCtrl LControl;
	afx_msg void ClickAdd();
	afx_msg void ClickDelete();

protected:
	void DoDataExchange(CDataExchange* pDX) override;
	HICON m_hIcon;
	BOOL OnInitDialog() override;
	DECLARE_MESSAGE_MAP()
};
