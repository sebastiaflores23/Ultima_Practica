#pragma once

// Destino de los comandos de CMySocket

class CMySocket : public CAsyncSocket
{
public:
	CMySocket();
	virtual ~CMySocket();
private:
//	CDialog* m_pWnd;
public:
	void SetParent(CDialog* pWnd);
protected:
	virtual void OnAccept(int nErrorCode);
};


