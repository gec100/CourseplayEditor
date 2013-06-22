#ifndef VARIABLES_H_INCLUDED
#define VARIABLES_H_INCLUDED

#include <wx/wx.h>

enum FarmingSimulatorGames
{
    FS2011,
    FS2013,

    NumOfFSGames,
};

struct GameSearchPaths
{
    wxString        game;
    wxArrayString   installLocations;
    wxString        savegameLocation;
};

#endif // VARIABLES_H_INCLUDED
