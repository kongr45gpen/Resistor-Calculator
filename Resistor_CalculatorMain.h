/***************************************************************
 * Name:      Resistor_CalculatorMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2012-01-24
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef RESISTOR_CALCULATORMAIN_H
#define RESISTOR_CALCULATORMAIN_H



#include "Resistor_CalculatorApp.h"



#include "GUIDialog.h"

class Resistor_CalculatorDialog: public GUIDialog
{
    public:
        Resistor_CalculatorDialog(wxDialog *dlg);
        ~Resistor_CalculatorDialog();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
        //virtual void OnAboutClose(wxCommandEvent& event);
        virtual void OnCalculate(wxCommandEvent& event);
        virtual void OnLedColor(wxCommandEvent& event);

        //wxDECLARE_EVENT_TABLE()
};
class AboutDialog: public About
{
    public:
        AboutDialog(wxDialog *dlg);
        ~AboutDialog();
    private:
        virtual void OnAboutClick(wxCommandEvent& event);

        //wxDECLARE_EVENT_TABLE()
};
#endif // RESISTOR_CALCULATORMAIN_H
