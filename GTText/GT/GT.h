// GT.h: archivo de encabezado principal para la aplicaci�n GT
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"       // S�mbolos principales
#include "Xmltree_i.h"


// CGTApp:
// Consulte la secci�n GT.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class CGTApp : public CWinAppEx
{
public:
	CGTApp();


// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementaci�n
	afx_msg void OnAppAbout();

	DECLARE_MESSAGE_MAP()
private:
	BOOL m_bATLInited;
private:
	BOOL InitATL();
	BOOL m_newFromClipboard;
public:
	afx_msg void OnFileFromclipboard();
	BOOL GetClipboardFlag(){return m_newFromClipboard;};
	
	afx_msg void OnUpdateFileFromclipboard(CCmdUI *pCmdUI);
};

extern CGTApp theApp;