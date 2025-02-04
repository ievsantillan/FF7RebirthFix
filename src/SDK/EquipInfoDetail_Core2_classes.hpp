#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipInfoDetail_Core2

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipInfoDetail_Core2.EquipInfoDetail_Core2_C
// 0x0040 (0x0418 - 0x03D8)
class UEquipInfoDetail_Core2_C final : public UEndEquipInfoDetailCore2
{
public:
	class UWidgetAnimation*                       Normal;                                            // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Max;                                               // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              EndImage_58;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_146;                                      // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Base_R;                                        // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_InfoWindowBg_C*               InfoWindowBg;                                      // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line_1;                                            // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Title;                                         // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipInfoDetail_Core2_C">();
	}
	static class UEquipInfoDetail_Core2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipInfoDetail_Core2_C>();
	}
};
static_assert(alignof(UEquipInfoDetail_Core2_C) == 0x000008, "Wrong alignment on UEquipInfoDetail_Core2_C");
static_assert(sizeof(UEquipInfoDetail_Core2_C) == 0x000418, "Wrong size on UEquipInfoDetail_Core2_C");
static_assert(offsetof(UEquipInfoDetail_Core2_C, Normal) == 0x0003D8, "Member 'UEquipInfoDetail_Core2_C::Normal' has a wrong offset!");
static_assert(offsetof(UEquipInfoDetail_Core2_C, Max) == 0x0003E0, "Member 'UEquipInfoDetail_Core2_C::Max' has a wrong offset!");
static_assert(offsetof(UEquipInfoDetail_Core2_C, EndImage_58) == 0x0003E8, "Member 'UEquipInfoDetail_Core2_C::EndImage_58' has a wrong offset!");
static_assert(offsetof(UEquipInfoDetail_Core2_C, EndImage_146) == 0x0003F0, "Member 'UEquipInfoDetail_Core2_C::EndImage_146' has a wrong offset!");
static_assert(offsetof(UEquipInfoDetail_Core2_C, Img_Base_R) == 0x0003F8, "Member 'UEquipInfoDetail_Core2_C::Img_Base_R' has a wrong offset!");
static_assert(offsetof(UEquipInfoDetail_Core2_C, InfoWindowBg) == 0x000400, "Member 'UEquipInfoDetail_Core2_C::InfoWindowBg' has a wrong offset!");
static_assert(offsetof(UEquipInfoDetail_Core2_C, Line_1) == 0x000408, "Member 'UEquipInfoDetail_Core2_C::Line_1' has a wrong offset!");
static_assert(offsetof(UEquipInfoDetail_Core2_C, Txt_Title) == 0x000410, "Member 'UEquipInfoDetail_Core2_C::Txt_Title' has a wrong offset!");

}

