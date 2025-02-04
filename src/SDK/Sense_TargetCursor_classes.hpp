#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sense_TargetCursor

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Sense_TargetCursor.Sense_TargetCursor_C
// 0x0070 (0x0438 - 0x03C8)
class USense_TargetCursor_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop;                                              // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_A00;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_A01;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_A02;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_A03;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_B00;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_B01;                                    // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_B02;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_B03;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_B04;                                    // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_B05;                                    // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Target_B06;                                    // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sense_TargetCursor_C">();
	}
	static class USense_TargetCursor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USense_TargetCursor_C>();
	}
};
static_assert(alignof(USense_TargetCursor_C) == 0x000008, "Wrong alignment on USense_TargetCursor_C");
static_assert(sizeof(USense_TargetCursor_C) == 0x000438, "Wrong size on USense_TargetCursor_C");
static_assert(offsetof(USense_TargetCursor_C, Out) == 0x0003C8, "Member 'USense_TargetCursor_C::Out' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Loop) == 0x0003D0, "Member 'USense_TargetCursor_C::Loop' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, In) == 0x0003D8, "Member 'USense_TargetCursor_C::In' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_A00) == 0x0003E0, "Member 'USense_TargetCursor_C::Img_Target_A00' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_A01) == 0x0003E8, "Member 'USense_TargetCursor_C::Img_Target_A01' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_A02) == 0x0003F0, "Member 'USense_TargetCursor_C::Img_Target_A02' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_A03) == 0x0003F8, "Member 'USense_TargetCursor_C::Img_Target_A03' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_B00) == 0x000400, "Member 'USense_TargetCursor_C::Img_Target_B00' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_B01) == 0x000408, "Member 'USense_TargetCursor_C::Img_Target_B01' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_B02) == 0x000410, "Member 'USense_TargetCursor_C::Img_Target_B02' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_B03) == 0x000418, "Member 'USense_TargetCursor_C::Img_Target_B03' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_B04) == 0x000420, "Member 'USense_TargetCursor_C::Img_Target_B04' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_B05) == 0x000428, "Member 'USense_TargetCursor_C::Img_Target_B05' has a wrong offset!");
static_assert(offsetof(USense_TargetCursor_C, Img_Target_B06) == 0x000430, "Member 'USense_TargetCursor_C::Img_Target_B06' has a wrong offset!");

}

