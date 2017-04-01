#include "UserFrame.h"

//(*InternalHeaders(UserFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(UserFrame)
const long UserFrame::ID_STATICTEXT1 = wxNewId();
const long UserFrame::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(UserFrame,wxFrame)
	//(*EventTable(UserFrame)
	//*)
END_EVENT_TABLE()

UserFrame::UserFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(UserFrame)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(1120,617));
	Move(wxDefaultPosition);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxPoint(272,232), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Label"), wxPoint(328,288), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	//*)
}

UserFrame::~UserFrame()
{
	//(*Destroy(UserFrame)
	//*)
}

