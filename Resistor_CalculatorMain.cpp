/***************************************************************
 * Name:      Resistor_CalculatorMain.cpp
 * Purpose:   Code for Application Frame
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

#include "Resistor_CalculatorMain.h"

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}



double round(double r) {
    return (r > 0.0) ? floor(r + 0.5) : ceil(r - 0.5);
}

Resistor_CalculatorDialog::Resistor_CalculatorDialog(wxDialog *dlg)
    : GUIDialog(dlg)
{
}

Resistor_CalculatorDialog::~Resistor_CalculatorDialog()
{
}

AboutDialog::AboutDialog(wxDialog *dlg)
    : About(dlg)
{
}

AboutDialog::~AboutDialog()
{
}

void Resistor_CalculatorDialog::OnClose(wxCloseEvent &event)
{
    //this->Close();
    Destroy();
}

void Resistor_CalculatorDialog::OnQuit(wxCommandEvent &event)
{
    //this->Close();
    Destroy();
}

void Resistor_CalculatorDialog::OnAbout(wxCommandEvent &event)
{
    AboutDialog* aboutdialog = new AboutDialog(0L);
    aboutdialog->SetIcon(wxICON(aaaa)); // To Set App Icon
    aboutdialog->ShowModal();
}
void AboutDialog::OnAboutClick(wxCommandEvent &event)
{
 //   wxMessageBox(_("Please provide a valid number input"), _("Input Error!"),wxICON_ERROR );

    this->EndModal(0);
    this->Destroy();

}
void Resistor_CalculatorDialog::OnCalculate(wxCommandEvent &event)
{
    bool error = false;
    wxString msg = m_textCtrl2->GetValue();
    wxString number(msg);
    double totalvolts;
    if(!number.ToDouble(&totalvolts)){ error = 1; }
    delete number;
    msg = m_textCtrl3->GetValue();
    wxString number1(msg);
    double ledvolts;
    if(!number1.ToDouble(&ledvolts)){ error = 1; }
    double amberes = m_radioBox1->GetSelection();
 //   if(!number.ToLong(&value)) { error = 1; }

    if (amberes == 1) {
        amberes = 0.010;
    } else if (amberes ==2) {
        amberes = 0.020;
    } else {
        amberes = 0.002;
    }

    double resistance = round((totalvolts-ledvolts)/amberes);
    wxString ohms = wxString::Format(wxT("%i"),int(resistance));
    //wxMessageBox(ohms, _("Welcome to..."));
    m_textCtrl21->SetValue(ohms);
    if(error) { wxMessageBox(_("Please provide a valid number input"), _("Input Error!"),wxICON_ERROR ); }
}
void Resistor_CalculatorDialog::OnLedColor(wxCommandEvent &event)
{
    int selection = event.GetSelection();
    wxString ledvoltage; bool seteditable = 0;
    switch(selection) {
    case 0:
        ledvoltage = _("1.6"); break;
    case 1:
        ledvoltage = _("1.8"); break;
    case 2:
        ledvoltage = _("2.1"); break;
    case 3:
        ledvoltage = _("2.15"); break;
    case 4:
        ledvoltage = _("2.3"); break;
    case 5:
        ledvoltage = _("2.6"); break;
    case 6:
        ledvoltage = _("2.8"); break;
    case 7:
        ledvoltage = _("3"); break;
    case 8:
        ledvoltage = _("3.5"); break;
    default:
        seteditable= 1;
        m_textCtrl3->SetEditable(1);
    }
    if(!seteditable) {
        m_textCtrl3->SetEditable(0);
        m_textCtrl3->SetValue(ledvoltage);
    }
    //wxString msg = wxString::Format(wxT("%i"),selection);
    //wxMessageBox(ledvoltage, _("Welcome to..."));
}
