﻿// TestDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Modal.h"
#include "afxdialogex.h"
#include "TestDlg.h"


// CTestDlg 대화 상자

IMPLEMENT_DYNAMIC(CTestDlg, CDialogEx)

CTestDlg::CTestDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TESTDLG, pParent)
{

}

CTestDlg::~CTestDlg()
{
}

void CTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTestDlg, CDialogEx)
END_MESSAGE_MAP()


// CTestDlg 메시지 처리기
