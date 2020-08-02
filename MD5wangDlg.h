// MD5wangDlg.h : header file
//

#if !defined(AFX_MD5WANGDLG_H__4EB7587A_3702_4AC5_AC6A_518DEA719000__INCLUDED_)
#define AFX_MD5WANGDLG_H__4EB7587A_3702_4AC5_AC6A_518DEA719000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMD5wangDlg dialog

class CMD5wangDlg : public CDialog
{
// Construction
public:
	CMD5wangDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMD5wangDlg)
	enum { IDD = IDD_MD5WANG_DIALOG };
	CString	m_strWaitingEncryptString;
	CString	m_strMD5EncryptString;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMD5wangDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMD5wangDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnMd5encrypt();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MD5WANGDLG_H__4EB7587A_3702_4AC5_AC6A_518DEA719000__INCLUDED_)
