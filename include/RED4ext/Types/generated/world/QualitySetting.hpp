#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ConfigGraphicsQualityLevel.hpp>

namespace RED4ext
{
namespace world { 
struct QualitySetting
{
    static constexpr const char* NAME = "worldQualitySetting";
    static constexpr const char* ALIAS = NAME;

    ConfigGraphicsQualityLevel QualityLevel; // 00
    uint32_t xEntitiesBudget; // 04
};
RED4EXT_ASSERT_SIZE(QualitySetting, 0x8);
} // namespace world
} // namespace RED4ext
