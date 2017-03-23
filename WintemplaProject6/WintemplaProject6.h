#pragma once  //______________________________________ WintemplaProject6.h  
#include "Resource.h"
class WintemplaProject6 : public Win::Window
{
public:
	WintemplaProject6()
	{
	}
	~WintemplaProject6()
	{
	}
	const wchar_t * GetClassName() { return L"WintemplaProject6"; }
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Com::Container pdf1;
protected:
	Win::Gdi::Font fontArial009A;
	void GetWindowInformation(CREATESTRUCT& createStruct)
	{
		createStruct.style = WS_CLIPCHILDREN | WS_OVERLAPPEDWINDOW;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"WintemplaProject6";
		pdf1.CreateX(WS_EX_CLIENTEDGE, L"AcroPDF.PDF.1", WS_CHILD | WS_VISIBLE, 0.15875, 0.18521, 14.04938, 9.68375, hWnd, 1000);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		pdf1.SetDock(DOCK_BORDER, DOCK_BORDER, DOCK_BORDER, DOCK_BORDER);
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
