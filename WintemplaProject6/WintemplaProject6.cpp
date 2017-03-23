#include "stdafx.h"  //________________________________________ WintemplaProject6.cpp
#include "WintemplaProject6.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	WintemplaProject6 app;
	app.CreateMainWindow(L"WintemplaProject6", cmdShow, IDI_WintemplaProject6, NULL, (HBRUSH)(COLOR_WINDOW + 1), hInstance);
	return app.MessageLoop(IDC_WintemplaProject6);
}

void WintemplaProject6::Window_Open(Win::Event& e)
{
	//________________________________________________________ pdf1
	try
	{
		pdf1.Activate();
		//Methods and Properties: Visual Studio > View > Object Browser > Browse ... > COM Tab (Select the Activex)
		pdf1.comobj.Put(L"src", _variant_t(L"C:\\MyDocuments\\MyDocument.pdf"));
		pdf1.UpdateSize();
	}
	catch (Com::Exception cex)
	{
		wchar_t text[512];
		cex.GetErrorText(text, 512);
		this->MessageBox(text, L"COM Error", MB_OK | MB_ICONERROR);
	}
	catch (_com_error & e)
	{
		this->MessageBox(e.ErrorMessage(), L"COM Error", MB_OK | MB_ICONERROR);
	}
}

