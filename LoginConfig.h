#ifndef LOGINCONFIG_H
#define LOGINCONFIG_H

//(*Headers(LoginConfig)
#include <wx/dialog.h>
//*)

class LoginConfig: public wxDialog
{
	public:

		LoginConfig(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~LoginConfig();

		//(*Declarations(LoginConfig)
		//*)

	protected:

		//(*Identifiers(LoginConfig)
		//*)

	private:

		//(*Handlers(LoginConfig)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
