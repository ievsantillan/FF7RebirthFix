#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: One100_MIDGA

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass 1100-MIDGA.1100-MIDGA_C
// 0x0008 (0x0238 - 0x0230)
class AOne100_MIDGA_C final : public AEndLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_1100_MIDGA(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"1100-MIDGA_C">();
	}
	static class AOne100_MIDGA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOne100_MIDGA_C>();
	}
};
static_assert(alignof(AOne100_MIDGA_C) == 0x000008, "Wrong alignment on AOne100_MIDGA_C");
static_assert(sizeof(AOne100_MIDGA_C) == 0x000238, "Wrong size on AOne100_MIDGA_C");
static_assert(offsetof(AOne100_MIDGA_C, UberGraphFrame) == 0x000230, "Member 'AOne100_MIDGA_C::UberGraphFrame' has a wrong offset!");

}

