#ifndef USERFRAME_H
#define USERFRAME_H

//(*Headers(UserFrame)
#include <wx/stattext.h>
#include <wx/frame.h>
//*)

class UserFrame: public wxFrame
{
	public:

		UserFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~UserFrame();

		//(*Declarations(UserFrame)
		wxStaticText* StaticText2;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(UserFrame)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(UserFrame)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
