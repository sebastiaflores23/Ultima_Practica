// CMySocket.cpp: archivo de implementación
//


#include "pch.h"
#include "Ethernet_2.h"
#include "CMySocket.h"

#include "stdafx.h"
#include "Sock.h"
#include "MySocket.h"
#include "SockDlg.h"


// CMySocket

//CMySocket::CMySocket()
//{
//}

//CMySocket::~CMySocket()
//{
//}


// Funciones de miembro de CMySocket


void CMySocket::SetParent(CDialog* pWnd)
{
    // TODO: Agregar aquí el código de implementación.
     // Set the member pointer4:     
    m_pWnd = pWnd;
}


void CMySocket::OnAccept(int nErrorCode)
{
    // TODO: Agregar aquí el código de implementación.
    // Were there any errors?4:     
    if (nErrorCode == 0)        
        // No, call the dialog’s OnAccept function:         
        ((CSockDlg*)m_pWnd)->OnAccept();
}

void CMySocket::OnConnect(int nErrorCode)
{
    // TODO: Agregar aquí el código de implementación.
    // Were there any errors?4:     
    if (nErrorCode == 0)
        // No, call the dialog’s OnAccept function:         
        ((CSockDlg*)m_pWnd)->OnConnect();
}

void CMySocket::OnClose(int nErrorCode)
{
    // TODO: Agregar aquí el código de implementación.
    // Were there any errors?4:     
    if (nErrorCode == 0)
        // No, call the dialog’s OnAccept function:         
        ((CSockDlg*)m_pWnd)->OnClose();

}

void CMySocket::OnReceive(int nErrorCode)
{
    // TODO: Agregar aquí el código de implementación.
    // Were there any errors?4:     
    if (nErrorCode == 0)
        // No, call the dialog’s OnAccept function:         
        ((CSockDlg*)m_pWnd)->OnReceive();
}
void CMySocket::OnSend(int nErrorCode)
{
    // TODO: Agregar aquí el código de implementación.
    // Were there any errors?4:     
    if (nErrorCode == 0)
        // No, call the dialog’s OnAccept function:         
        ((CSockDlg*)m_pWnd)->OnSend();
}


