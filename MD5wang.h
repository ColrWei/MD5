// MD5wang.h : main header file for the MD5WANG application
//

#if !defined(AFX_MD5WANG_H__ACFE6E74_0974_4658_993D_FB5622995187__INCLUDED_)
#define AFX_MD5WANG_H__ACFE6E74_0974_4658_993D_FB5622995187__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMD5wangApp:
// See MD5wang.cpp for the implementation of this class
//

class CMD5wangApp : public CWinApp
{
public:
	CMD5wangApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMD5wangApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMD5wangApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MD5WANG_H__ACFE6E74_0974_4658_993D_FB5622995187__INCLUDED_)
