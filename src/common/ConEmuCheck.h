#pragma once

#define VirtualConsoleClass _T("VirtualConsoleClass")
#define VirtualConsoleClassMain _T("VirtualConsoleClass")
#define VirtualConsoleClassApp _T("VirtualConsoleClassApp")
#define VirtualConsoleClassBack _T("VirtualConsoleClassBack")

// Service function
HWND AtoH(char *Str, int Len);

// 0 -- All OK (ConEmu found, Version OK)
// 1 -- NO ConEmu (simple console mode)
// 2 -- ConEmu found, but old version
int ConEmuCheck(HWND* ahConEmuWnd);


// Returns HWND of Gui console DC window
//     pnConsoleIsChild [out]
//        -1 -- Non ConEmu mode
//         0 -- console is standalone window
//         1 -- console is child of ConEmu DC window
//         2 -- console is child of Main ConEmu window (why?)
//         3 -- same as 2, but ConEmu DC window - absent (old conemu version?)
//         4 -- same as 0, but ConEmu DC window - absent (old conemu version?)
HWND GetConEmuHWND(BOOL abRoot, int* pnConsoleIsChild/*=NULL*/);
