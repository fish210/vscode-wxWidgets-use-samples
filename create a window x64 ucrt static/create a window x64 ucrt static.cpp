#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "wx/wx.h"

// use gcc12 uct link
// winlibs-x86_64-posix-seh-gcc-12.1.0-mingw-w64ucrt-10.0.0

// https://github.com/wxWidgets/wxWidgets/releases/tag/v3.1.7
// wxWidgets-3.1.7.7z 
// compile link to "x86_64 gcc-12.1.0-mingw-w64ucrt"

//自己编译出静态库，或者直接用我编译好的静态库文件 .a文件

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
