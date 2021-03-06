#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/ent/VoicesetInputToBlock.hpp>
#include <RED4ext/Types/generated/game/ComponentPS.hpp>
#include <RED4ext/Types/generated/game/data/NPCHighLevelState.hpp>

namespace RED4ext
{
namespace scn { 
struct VoicesetComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "scnVoicesetComponentPS";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::VoicesetInputToBlock> blockedInputs; // 68
    CName voiceTag; // 78
    game::data::NPCHighLevelState NPCHighLevelState; // 80
    uint32_t gruntSetIndex; // 84
    bool areVoicesetLinesEnabled; // 88
    bool areVoicesetGruntsEnabled; // 89
    uint8_t unk8A[0x90 - 0x8A]; // 8A
};
RED4EXT_ASSERT_SIZE(VoicesetComponentPS, 0x90);
} // namespace scn
} // namespace RED4ext
