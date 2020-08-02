; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMD5wangDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MD5wang.h"

ClassCount=3
Class1=CMD5wangApp
Class2=CMD5wangDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_MD5WANG_DIALOG

[CLS:CMD5wangApp]
Type=0
HeaderFile=MD5wang.h
ImplementationFile=MD5wang.cpp
Filter=N

[CLS:CMD5wangDlg]
Type=0
HeaderFile=MD5wangDlg.h
ImplementationFile=MD5wangDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_WAITINGFORENCRYPTSTRING

[CLS:CAboutDlg]
Type=0
HeaderFile=MD5wangDlg.h
ImplementationFile=MD5wangDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=5
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Control5=IDC_STATIC,static,1342308352

[DLG:IDD_MD5WANG_DIALOG]
Type=1
Class=CMD5wangDlg
ControlCount=6
Control1=IDC_MD5ENCRYPT,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_WAITINGFORENCRYPTSTRING,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_MD5ENCRYPTSTRING,edit,1350633600

