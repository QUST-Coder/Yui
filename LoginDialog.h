#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

//(*Headers(LoginDialog)
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class LoginDialog: public wxDialog
{
	public:

		LoginDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~LoginDialog();

		//(*Declarations(LoginDialog)
		wxTextCtrl* Password;
		wxButton* ButtonExit;
		wxStaticText* StaticText2;
		wxStaticText* RaceStatu;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxTextCtrl* UserName;
		wxButton* LoginButton;
		wxStaticText* StaticText5;
		wxButton* Reset;
		wxStaticText* StaticText4;
		//*)

	protected:

		//(*Identifiers(LoginDialog)
		static const long ID_BUTTON_Login;
		static const long ID_TEXTCTRL_Username;
		static const long ID_TEXTCTRL_Password;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_BUTTON_Exit;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT_RaceStatu;
		static const long ID_BUTTON_Reset;
		//*)

	private:

		//(*Handlers(LoginDialog)
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnLoginButtonClick(wxCommandEvent& event);
		void OnButtonExitClick(wxCommandEvent& event);
		void OnResetClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
