#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct RagdollNotifyEnabledEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollNotifyEnabledEvent";
    static constexpr const char* ALIAS = "RagdollNotifyEnabledEvent";

};
RED4EXT_ASSERT_SIZE(RagdollNotifyEnabledEvent, 0x40);
} // namespace ent
using RagdollNotifyEnabledEvent = ent::RagdollNotifyEnabledEvent;
} // namespace RED4ext
