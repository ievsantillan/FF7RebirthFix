#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SaintCharge

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SaintCharge.SaintCharge_C
// 0x0070 (0x0438 - 0x03C8)
class USaintCharge_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Level2_Loop;                                       // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LevelUp;                                           // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Base_00;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_00;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_01;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_LevelUp;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_Light_Hrz;                                  // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_Light_Vrt;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_Ring;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_Ring_1;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_Ring_In;                                    // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndPieImage*                           Gauge_00;                                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SaintCharge_C">();
	}
	static class USaintCharge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USaintCharge_C>();
	}
};
static_assert(alignof(USaintCharge_C) == 0x000008, "Wrong alignment on USaintCharge_C");
static_assert(sizeof(USaintCharge_C) == 0x000438, "Wrong size on USaintCharge_C");
static_assert(offsetof(USaintCharge_C, Level2_Loop) == 0x0003C8, "Member 'USaintCharge_C::Level2_Loop' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, LevelUp) == 0x0003D0, "Member 'USaintCharge_C::LevelUp' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Out) == 0x0003D8, "Member 'USaintCharge_C::Out' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, In) == 0x0003E0, "Member 'USaintCharge_C::In' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Base_00) == 0x0003E8, "Member 'USaintCharge_C::Base_00' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Effect_00) == 0x0003F0, "Member 'USaintCharge_C::Effect_00' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Effect_01) == 0x0003F8, "Member 'USaintCharge_C::Effect_01' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Effect_LevelUp) == 0x000400, "Member 'USaintCharge_C::Effect_LevelUp' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Effect_Light_Hrz) == 0x000408, "Member 'USaintCharge_C::Effect_Light_Hrz' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Effect_Light_Vrt) == 0x000410, "Member 'USaintCharge_C::Effect_Light_Vrt' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Effect_Ring) == 0x000418, "Member 'USaintCharge_C::Effect_Ring' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Effect_Ring_1) == 0x000420, "Member 'USaintCharge_C::Effect_Ring_1' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Effect_Ring_In) == 0x000428, "Member 'USaintCharge_C::Effect_Ring_In' has a wrong offset!");
static_assert(offsetof(USaintCharge_C, Gauge_00) == 0x000430, "Member 'USaintCharge_C::Gauge_00' has a wrong offset!");

}

