#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct EntityManagerSendAnimationEvent_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerSendAnimationEvent_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 30
    uint8_t unk68[0x70 - 0x68]; // 68
    CName eventName; // 70
};
RED4EXT_ASSERT_SIZE(EntityManagerSendAnimationEvent_NodeType, 0x78);
} // namespace quest
} // namespace RED4ext
