///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIDialog.h"

///////////////////////////////////////////////////////////////////////////

GUIDialog::GUIDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Source Voltage (in V):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	fgSizer3->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxT("5"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_textCtrl2->SetMaxLength( 5 ); 
	fgSizer3->Add( m_textCtrl2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("LED Voltage (in V):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	fgSizer3->Add( m_staticText4, 0, wxALL, 5 );
	
	m_textCtrl3 = new wxTextCtrl( this, wxID_ANY, wxT("2"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_textCtrl3->SetMaxLength( 5 ); 
	fgSizer3->Add( m_textCtrl3, 0, wxALL, 5 );
	
	bSizer41->Add( fgSizer3, 0, wxEXPAND, 5 );
	
	
	bSizer41->Add( 20, 0, 1, wxEXPAND, 5 );
	
	wxString m_radioBox1Choices[] = { wxT("2 mA"), wxT("10 mA"), wxT("20 mA") };
	int m_radioBox1NChoices = sizeof( m_radioBox1Choices ) / sizeof( wxString );
	m_radioBox1 = new wxRadioBox( this, wxID_ANY, wxT("Electrical current"), wxDefaultPosition, wxDefaultSize, m_radioBox1NChoices, m_radioBox1Choices, 1, 0 );
	m_radioBox1->SetSelection( 2 );
	bSizer41->Add( m_radioBox1, 0, wxALL|wxEXPAND, 5 );
	
	bSizer42->Add( bSizer41, 0, wxEXPAND, 5 );
	
	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer42->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	m_button3 = new wxButton( this, wxID_ANY, wxT("Calculate!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button3->SetFont( wxFont( 9, 74, 90, 92, false, wxT("Tahoma") ) );
	
	bSizer42->Add( m_button3, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button4 = new wxButton( this, wxID_ANY, wxT("Settings"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button4, 1, wxALL, 5 );
	
	m_button2 = new wxButton( this, wxID_ANY, wxT("About"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button2, 1, wxALL, 5 );
	
	bSizer42->Add( bSizer5, 0, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_textCtrl21 = new wxTextCtrl( this, wxID_ANY, wxT("150"), wxDefaultPosition, wxDefaultSize, wxTE_CENTRE|wxTE_READONLY );
	m_textCtrl21->SetFont( wxFont( 14, 74, 90, 92, false, wxT("Tahoma") ) );
	
	fgSizer2->Add( m_textCtrl21, 0, wxALL, 5 );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Ohm(s)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	m_staticText5->SetFont( wxFont( 9, 74, 90, 90, false, wxT("Tahoma") ) );
	
	fgSizer2->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer42->Add( fgSizer2, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer4->Add( bSizer42, 0, wxEXPAND, 5 );
	
	
	bSizer4->Add( 5, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	wxString m_radioBox2Choices[] = { wxT("Infrared"), wxT("Red"), wxT("Orange"), wxT("Yellow"), wxT("Green"), wxT("Blue"), wxT("Violet"), wxT("Purple"), wxT("Ultraviolet / White"), wxT("Specify Voltage") };
	int m_radioBox2NChoices = sizeof( m_radioBox2Choices ) / sizeof( wxString );
	m_radioBox2 = new wxRadioBox( this, wxID_ANY, wxT("LED Colour"), wxDefaultPosition, wxDefaultSize, m_radioBox2NChoices, m_radioBox2Choices, 1, wxRA_SPECIFY_COLS );
	m_radioBox2->SetSelection( 9 );
	bSizer6->Add( m_radioBox2, 0, wxALL, 5 );
	
	bSizer4->Add( bSizer6, 0, wxEXPAND, 5 );
	
	this->SetSizer( bSizer4 );
	this->Layout();
	bSizer4->Fit( this );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
	m_textCtrl2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_textCtrl2->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_textCtrl3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_textCtrl3->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_radioBox1->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::OnSettings ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::OnAbout ), NULL, this );
	m_radioBox2->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIDialog::OnLedColor ), NULL, this );
}

GUIDialog::~GUIDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
	m_textCtrl2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_textCtrl2->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_textCtrl3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_textCtrl3->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_radioBox1->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::OnCalculate ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::OnSettings ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::OnAbout ), NULL, this );
	m_radioBox2->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIDialog::OnLedColor ), NULL, this );
	
}

About::About( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("resistor.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_bitmap1, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("Program design by kongr45gpen"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	bSizer8->Add( m_staticText51, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Icon by Afrank99"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer8->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("Data by Wikipedia"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	bSizer8->Add( m_staticText61, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer8->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_button6 = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button6->SetDefault(); 
	bSizer8->Add( m_button6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	bSizer7->Add( bSizer8, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer7 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( About::OnAboutClose ) );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( About::OnAboutClick ), NULL, this );
}

About::~About()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( About::OnAboutClose ) );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( About::OnAboutClick ), NULL, this );
	
}
