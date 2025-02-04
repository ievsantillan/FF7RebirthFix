#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SampleNewSwitch00

#include "Basic.hpp"

#include "EndSwitchBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SampleNewSwitch00.SampleNewSwitch00_C
// 0x0000 (0x0C70 - 0x0C70)
class ASampleNewSwitch00_C : public AEndSwitchBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SampleNewSwitch00_C">();
	}
	static class ASampleNewSwitch00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASampleNewSwitch00_C>();
	}
};
static_assert(alignof(ASampleNewSwitch00_C) == 0x000010, "Wrong alignment on ASampleNewSwitch00_C");
static_assert(sizeof(ASampleNewSwitch00_C) == 0x000C70, "Wrong size on ASampleNewSwitch00_C");

}

