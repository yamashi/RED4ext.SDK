#pragma once

#include <cstdint>
#include <Windows.h>

#include <RED4ext/Common.hpp>
#include <RED4ext/RTTITypes.hpp>

namespace RED4ext
{
struct IRTTISystem
{
    virtual IRTTIType* GetType(uint64_t aHash) = 0;
    virtual void sub_8() = 0;
    virtual CClass* GetClass(uint64_t aHash) = 0;
    virtual IRTTIType* GetEnum(uint64_t aHash) = 0;
    virtual IRTTIType* BitField(uint64_t aHash) = 0;
    virtual void sub_28() = 0;
    virtual void sub_30() = 0;
    virtual void sub_38() = 0;
    virtual void sub_40() = 0;
    virtual void sub_48() = 0;
    virtual void sub_50() = 0;
    virtual void sub_58() = 0;
    virtual void sub_60() = 0;
    virtual void sub_68() = 0;
    virtual void sub_70() = 0;
    virtual void sub_78() = 0;
    virtual bool RegisterType(IRTTIType* aType, uint32_t aAsyncId) = 0;
    virtual void sub_88() = 0;
    virtual void sub_90() = 0;
    virtual void sub_98() = 0;
    virtual void sub_A0() = 0;
    virtual void sub_A8() = 0;
    virtual void sub_B0() = 0;
    virtual void sub_B8() = 0;
    virtual void sub_C0() = 0;
    virtual void sub_C8() = 0;
    virtual void sub_D0() = 0;
    virtual void sub_D8() = 0;
    virtual void sub_E0() = 0;
    virtual void sub_E8() = 0;
    virtual void sub_F0() = 0;
    virtual void sub_F8() = 0;
    virtual void sub_100() = 0;
    virtual void sub_108() = 0;

    virtual ~IRTTISystem() = 0;
};

RED4EXT_ASSERT_SIZE(IRTTISystem, 0x8);

struct CRTTISystem : IRTTISystem
{
    static CRTTISystem* Get();

    Unk425 unk8;
    Unk425 unk38;
    Unk425 unk68;
    Unk425 unk98;
    Unk425 unkC8;
    Unk425 unkF8;
    int64_t unk128;
    DynamicBuffer<void*> unk130;
    DynamicBuffer<void*> unk140;
    int64_t unk150;
    int64_t unk158;
    int64_t unk160;
    int64_t unk168;
    int32_t unk170;
    int32_t unk174;
    Unk425 unk178;
    int64_t unk1A8;
    DynamicBuffer<void*> unk1B0;
    DynamicBuffer<void*> unk1C0;
    CRITICAL_SECTION unk1D0;
    uint8_t unk1F8;
    CRITICAL_SECTION unk200;
};

RED4EXT_ASSERT_SIZE(CRTTISystem, 0x228);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/RTTISystem-inl.hpp>
#endif