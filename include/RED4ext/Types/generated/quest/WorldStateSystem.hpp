#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/IWorldStateSystem.hpp>

namespace RED4ext
{
namespace quest { 
struct WorldStateSystem : quest::IWorldStateSystem
{
    static constexpr const char* NAME = "questWorldStateSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x188 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WorldStateSystem, 0x188);
} // namespace quest
} // namespace RED4ext
