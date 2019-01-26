#include "../UiContext.h"
#include "../interface/InGameConsole.h"

#include <algorithm>
#include <iterator>
#include <limits>
#include <openrct2-ui/interface/Dropdown.h>
#include <openrct2-ui/interface/LandTool.h>
#include <openrct2-ui/interface/Viewport.h>
#include <openrct2-ui/interface/Widget.h>
#include <openrct2-ui/windows/Window.h>
#include <openrct2/Cheats.h>
#include <openrct2/interface/Chat.h>
#include <openrct2/Context.h>
#include <openrct2/Editor.h>
// ANI header file
#include <openrct2/shit.h>
#include <openrct2/Game.h>
#include <openrct2/Input.h>
#include <openrct2/OpenRCT2.h>
#include <openrct2/ParkImporter.h>
#include <openrct2/actions/ClearAction.hpp>
#include <openrct2/audio/audio.h>
#include <openrct2/config/Config.h>
#include <openrct2/interface/InteractiveConsole.h>
#include <openrct2/interface/Screenshot.h>
#include <openrct2/interface/Window.h>
#include <openrct2/network/network.h>
#include <openrct2/network/twitch.h>
#include <openrct2/paint/VirtualFloor.h>
#include <openrct2/peep/Staff.h>
#include <openrct2/scenario/Scenario.h>
#include <openrct2/util/Util.h>
#include <openrct2/windows/Intent.h>
#include <openrct2/world/Footpath.h>
#include <openrct2/world/LargeScenery.h>
#include <openrct2/world/Park.h>
#include <openrct2/world/Scenery.h>
#include <openrct2/world/SmallScenery.h>
#include <openrct2/world/Surface.h>
#include <openrct2/world/Wall.h>
#include <string>

using namespace OpenRCT2;
using namespace OpenRCT2::Ui;

// clang-format off

enum {
    WIDX_LAND,
    WIDX_WATER,
    WIDX_SCENERY,
};

validate_global_widx(WC_TOP_TOOLBAR, WIDX_LAND);
validate_global_widx(WC_TOP_TOOLBAR, WIDX_WATER);
validate_global_widx(WC_TOP_TOOLBAR, WIDX_SCENERY);