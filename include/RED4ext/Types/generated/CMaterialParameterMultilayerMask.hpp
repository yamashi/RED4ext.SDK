#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct Multilayer_Mask;

struct CMaterialParameterMultilayerMask : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterMultilayerMask";
    static constexpr const char* ALIAS = NAME;

    Ref<Multilayer_Mask> mask; // 40
};
RED4EXT_ASSERT_SIZE(CMaterialParameterMultilayerMask, 0x58);
} // namespace RED4ext
