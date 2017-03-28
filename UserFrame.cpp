#include "UserFrame.h"

//(*InternalHeaders(UserFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(UserFrame)
//*)

BEGIN_EVENT_TABLE(UserFrame,wxFrame)
	//(*EventTable(UserFrame)
	//*)
END_EVENT_TABLE()

UserFrame::UserFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(UserFrame)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	//*)
}

UserFrame::~UserFrame()
{
	//(*Destroy(UserFrame)
	//*)
}

