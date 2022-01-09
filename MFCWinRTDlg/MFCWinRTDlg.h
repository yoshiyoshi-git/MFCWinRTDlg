
// MFCWinRTDlg.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMFCWinRTDlgApp:
// このクラスの実装については、MFCWinRTDlg.cpp を参照してください
//

class CMFCWinRTDlgApp : public CWinApp
{
public:
	CMFCWinRTDlgApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMFCWinRTDlgApp theApp;
