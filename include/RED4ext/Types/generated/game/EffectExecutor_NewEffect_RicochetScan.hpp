#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>
#include <RED4ext/Types/generated/game/EffectExecutor_NewEffect.hpp>

namespace RED4ext
{
namespace game { 
struct EffectExecutor_NewEffect_RicochetScan : game::EffectExecutor_NewEffect
{
    static constexpr const char* NAME = "gameEffectExecutor_NewEffect_RicochetScan";
    static constexpr const char* ALIAS = NAME;

    Vector4 box; // 60
    bool isPreview; // 70
    uint8_t unk71[0x80 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(EffectExecutor_NewEffect_RicochetScan, 0x80);
} // namespace game
} // namespace RED4ext