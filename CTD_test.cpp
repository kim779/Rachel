// CTD_test.cpp: 구현 파일
//

#include "pch.h"
#include "TestDlg.h"
#include "CTD_test.h"


// CTD_test

IMPLEMENT_DYNCREATE(CTD_test, CWinThread)

CTD_test::CTD_test()
{
}

CTD_test::~CTD_test()
{
}

BOOL CTD_test::InitInstance()
{
	m_slog.Format("[@][%s]", __FUNCTION__);
	m_data = 1;
	OutputDebugString(m_slog);
	return TRUE;
}

int CTD_test::ExitInstance()
{
	// TODO:  여기에서 각 스레드에 대한 정리를 수행합니다.
	m_slog.Format("[@][%s]", __FUNCTION__);
	OutputDebugString(m_slog);
	return CWinThread::ExitInstance();
}

BEGIN_MESSAGE_MAP(CTD_test, CWinThread)
END_MESSAGE_MAP()


// CTD_test 메시지 처리기


int CTD_test::Run()
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	while (1)
	{
		m_cs.Lock();
		m_data++;
		m_slog.Format("[@][%s]m_id=[%d] m_data=[%d]", __FUNCTION__, m_id,m_data);
		OutputDebugString(m_slog);
		Sleep(2000);
		//if (m_data >= 5)
		//	break;
	}
	
	//return 0;
	//return CWinThread::Run();
    return 0;
}
