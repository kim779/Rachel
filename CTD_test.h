#pragma once



// CTD_test

class CTD_test : public CWinThread
{
	DECLARE_DYNCREATE(CTD_test)

protected:
	CTD_test();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CTD_test();

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	int m_id;
	int m_data;
	CString m_slog;
	CCriticalSection m_cs;
protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual int Run();
};


