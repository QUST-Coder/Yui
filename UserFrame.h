#ifndef USERFRAME_H
#define USERFRAME_H

//(*Headers(UserFrame)
#include <wx/frame.h>
//*)

class UserFrame: public wxFrame
{
	public:

		UserFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~UserFrame();

		//(*Declarations(UserFrame)
		//*)

	protected:

		//(*Identifiers(UserFrame)
		//*)

	private:

		//(*Handlers(UserFrame)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
