#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct SpawnOccupantsEvent : red::Event
{
    static constexpr const char* NAME = "gameSpawnOccupantsEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SpawnOccupantsEvent, 0x40);
} // namespace game
} // namespace RED4ext
