#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

//(*Headers(LoginDialog)
#include <wx/dialog.h>
//*)

class LoginDialog: public wxDialog
{
	public:

		LoginDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~LoginDialog();

		//(*Declarations(LoginDialog)
		//*)

	protected:

		//(*Identifiers(LoginDialog)
		//*)

	private:

		//(*Handlers(LoginDialog)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
