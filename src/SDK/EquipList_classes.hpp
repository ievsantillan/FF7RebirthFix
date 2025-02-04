#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipList

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipList.EquipList_C
// 0x0040 (0x0420 - 0x03E0)
class UEquipList_C final : public UEndEquipList
{
public:
	class UEndImage*                              Bg;                                                // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_Bg3_C*                            Bg2;                                               // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_Bg3_C*                            Bg2_1;                                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_Bg3_C*                            Bg2_2;                                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_Bg3_C*                            Bg2_3;                                             // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTiledImage*                         ListBg2;                                           // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Title;                                         // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_TitleValue;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipList_C">();
	}
	static class UEquipList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipList_C>();
	}
};
static_assert(alignof(UEquipList_C) == 0x000008, "Wrong alignment on UEquipList_C");
static_assert(sizeof(UEquipList_C) == 0x000420, "Wrong size on UEquipList_C");
static_assert(offsetof(UEquipList_C, Bg) == 0x0003E0, "Member 'UEquipList_C::Bg' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Bg2) == 0x0003E8, "Member 'UEquipList_C::Bg2' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Bg2_1) == 0x0003F0, "Member 'UEquipList_C::Bg2_1' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Bg2_2) == 0x0003F8, "Member 'UEquipList_C::Bg2_2' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Bg2_3) == 0x000400, "Member 'UEquipList_C::Bg2_3' has a wrong offset!");
static_assert(offsetof(UEquipList_C, ListBg2) == 0x000408, "Member 'UEquipList_C::ListBg2' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Txt_Title) == 0x000410, "Member 'UEquipList_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Txt_TitleValue) == 0x000418, "Member 'UEquipList_C::Txt_TitleValue' has a wrong offset!");

}

