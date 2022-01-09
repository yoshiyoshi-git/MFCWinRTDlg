
// MFCWinRTDlgDlg.h : ヘッダー ファイル
//

#pragma once


// CMFCWinRTDlgDlg ダイアログ
class CMFCWinRTDlgDlg : public CDialogEx
{
// コンストラクション
public:
	CMFCWinRTDlgDlg(CWnd* pParent = nullptr);	// 標準コンストラクター

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCWINRTDLG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	winrt::Windows::Foundation::IAsyncAction AsyncButton1();
	afx_msg void OnBnClickedButton2();
	winrt::Windows::Foundation::IAsyncAction AsyncButton2();
};
