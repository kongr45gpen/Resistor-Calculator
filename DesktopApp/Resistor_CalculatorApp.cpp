/***************************************************************
 * Name:      Resistor_CalculatorApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2012-01-24
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "Resistor_CalculatorApp.h"
#include "Resistor_CalculatorMain.h"

IMPLEMENT_APP(Resistor_CalculatorApp);

bool Resistor_CalculatorApp::OnInit()
{

    Resistor_CalculatorDialog* dlg = new Resistor_CalculatorDialog(0L);
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    wxInitAllImageHandlers();
    return true;
}
