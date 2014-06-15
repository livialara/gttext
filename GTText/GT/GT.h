// GT.h: archivo de encabezado principal para la aplicaci�n GT
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"       // S�mbolos principales
#include "Xmltree_i.h"
#include "./Scanner/MainWnd.h"


// CGTApp:
// Consulte la secci�n GT.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//
enum ImportSource {
	clipboard,
	scanner,
	snapshot,
	imagefile,
	noimport,
	indetermined
};

class CGTApp : public CWinApp
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
	ImportSource m_importType;
	CMainWindow mainWindow;
	bool m_active;
public:
	afx_msg void OnFileFromclipboard();
	ImportSource GetImportType(){return m_importType;};
	CMainWindow* GetScannerManager(){return &mainWindow;};
	void SetImportType(ImportSource import){m_importType = import;};
	void SetActive(bool active){m_active = active;};
	bool GetActive(){return m_active;};
	
	afx_msg void OnUpdateFileFromclipboard(CCmdUI *pCmdUI);
	afx_msg void OnFileFromscannerorcamera();
	afx_msg void OnFileFromscreen();
};

extern CGTApp theApp;