#ifndef LOGINCONFIG_H
#define LOGINCONFIG_H
#include "src/YuiUtil.h"
//(*Headers(LoginConfig)
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class LoginConfig: public wxDialog
{
	public:

		LoginConfig(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~LoginConfig();

		//(*Declarations(LoginConfig)
		wxButton* ServerAddressConfirm;
		wxStaticText* WarningText;
		wxTextCtrl* ServerAddress;
		//*)

	protected:

		//(*Identifiers(LoginConfig)
		static const long ID_TEXTCTRL_ServerAddress;
		static const long ID_BUTTON_Confirm;
		static const long ID_STATICTEXT_Warning;
		//*)

	private:

		//(*Handlers(LoginConfig)
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnServerAddressConfirmClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
