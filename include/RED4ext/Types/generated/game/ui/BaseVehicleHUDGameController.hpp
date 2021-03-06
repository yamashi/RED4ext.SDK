#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BaseVehicleHUDGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiBaseVehicleHUDGameController";
    static constexpr const char* ALIAS = "BaseVehicleHUDGameController";

    bool mounted; // E8
    uint8_t unkE9[0xF0 - 0xE9]; // E9
};
RED4EXT_ASSERT_SIZE(BaseVehicleHUDGameController, 0xF0);
} // namespace game::ui
using BaseVehicleHUDGameController = game::ui::BaseVehicleHUDGameController;
} // namespace RED4ext
