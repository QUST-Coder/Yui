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
		wxStaticText* StaticText2;
		wxStaticText* StaticText1;
		wxTextCtrl* UserName;
		wxButton* LoginButton;
		//*)

	protected:

		//(*Identifiers(LoginDialog)
		static const long ID_BUTTON_Login;
		static const long ID_TEXTCTRL_Username;
		static const long ID_TEXTCTRL_Password;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(LoginDialog)
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnLoginButtonClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
