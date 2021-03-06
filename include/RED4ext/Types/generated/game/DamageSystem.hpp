#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/IDamageSystem.hpp>

namespace RED4ext
{
namespace game { 
struct DamageSystem : game::IDamageSystem
{
    static constexpr const char* NAME = "gameDamageSystem";
    static constexpr const char* ALIAS = "DamageSystem";

    uint8_t unk58[0x158 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(DamageSystem, 0x158);
} // namespace game
using DamageSystem = game::DamageSystem;
} // namespace RED4ext
