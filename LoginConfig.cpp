#include "LoginConfig.h"

//(*InternalHeaders(LoginConfig)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(LoginConfig)
//*)

BEGIN_EVENT_TABLE(LoginConfig,wxDialog)
	//(*EventTable(LoginConfig)
	//*)
END_EVENT_TABLE()

LoginConfig::LoginConfig(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(LoginConfig)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	//*)
}

LoginConfig::~LoginConfig()
{
	//(*Destroy(LoginConfig)
	//*)
}

