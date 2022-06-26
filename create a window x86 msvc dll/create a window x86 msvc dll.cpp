#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "wx/wx.h"

// use gcc12 msvc link
// winlibs-i686-posix-dwarf-gcc-12.1.0-mingw-w64msvcrt-10.0.0

// https://github.com/wxWidgets/wxWidgets/releases/tag/v3.1.7
// wxMSW-3.1.7_gcc1210_ReleaseDLL.7z
// wxbase317u_gcc1210.dll
// wxmsw317u_core_gcc1210.dll

//官方发布的dll只支持msvc链接的编译器，支持ucr的编译器的版本需要自己编译

class MyApp : public wxApp
{
public:
  virtual bool OnInit();
};
IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
  wxFrame *frame = new wxFrame(0, wxID_ANY, wxT("Window title"));
  frame->Show();
  return true;
}
