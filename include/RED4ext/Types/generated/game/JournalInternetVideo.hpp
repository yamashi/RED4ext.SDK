#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/JournalInternetBase.hpp>

namespace RED4ext
{
struct Bink;

namespace game { 
struct JournalInternetVideo : game::JournalInternetBase
{
    static constexpr const char* NAME = "gameJournalInternetVideo";
    static constexpr const char* ALIAS = "JournalInternetVideo";

    RaRef<Bink> videoResource; // 70
};
RED4EXT_ASSERT_SIZE(JournalInternetVideo, 0x78);
} // namespace game
using JournalInternetVideo = game::JournalInternetVideo;
} // namespace RED4ext
