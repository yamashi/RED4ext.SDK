#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/RectF.hpp>

namespace RED4ext
{
namespace ink { 
struct TextureAtlasSlice
{
    static constexpr const char* NAME = "inkTextureAtlasSlice";
    static constexpr const char* ALIAS = NAME;

    CName partName; // 00
    RectF nineSliceScaleRect; // 08
};
RED4EXT_ASSERT_SIZE(TextureAtlasSlice, 0x18);
} // namespace ink
} // namespace RED4ext
