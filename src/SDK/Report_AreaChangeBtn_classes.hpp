#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Report_AreaChangeBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Report_AreaChangeBtn.Report_AreaChangeBtn_C
// 0x0138 (0x0508 - 0x03D0)
class UReport_AreaChangeBtn_C final : public UEndMenuCategoryChangeBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       Loop2;                                             // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop;                                              // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WorldMap_0;                                        // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Chadley;                                           // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Story;                                             // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Quest;                                             // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Report;                                            // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LocationMap;                                       // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AreaMap;                                           // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WorldMap;                                          // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnPressR1;                                         // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnPressL1;                                         // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NoActive;                                          // 0x0440(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Base1;                                             // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base2_1;                                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base2_2;                                           // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Bg1;                                               // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Bg2;                                               // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Bg3;                                               // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Bg4;                                               // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndGauge*                              EndGauge1;                                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndGauge*                              EndGauge2;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_2;                                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_CardGame;                                     // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Left;                                         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_NaviMap_C*                        Icon_NaviMap;                                      // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Quest;                                        // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_QuestNotice;                                  // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Right;                                        // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              IconBase;                                          // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           IconSet;                                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line2_Img;                                         // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_CardGame_Num;                                  // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_CardGame_Scenario;                             // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Quest_Num;                                     // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              TxtBg_Main;                                        // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              TxtBg_Sub;                                         // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Report_AreaChangeBtn(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Report_AreaChangeBtn_C">();
	}
	static class UReport_AreaChangeBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReport_AreaChangeBtn_C>();
	}
};
static_assert(alignof(UReport_AreaChangeBtn_C) == 0x000008, "Wrong alignment on UReport_AreaChangeBtn_C");
static_assert(sizeof(UReport_AreaChangeBtn_C) == 0x000508, "Wrong size on UReport_AreaChangeBtn_C");
static_assert(offsetof(UReport_AreaChangeBtn_C, UberGraphFrame) == 0x0003D0, "Member 'UReport_AreaChangeBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Loop2) == 0x0003D8, "Member 'UReport_AreaChangeBtn_C::Loop2' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Loop) == 0x0003E0, "Member 'UReport_AreaChangeBtn_C::Loop' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, WorldMap_0) == 0x0003E8, "Member 'UReport_AreaChangeBtn_C::WorldMap_0' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Chadley) == 0x0003F0, "Member 'UReport_AreaChangeBtn_C::Chadley' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Story) == 0x0003F8, "Member 'UReport_AreaChangeBtn_C::Story' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Quest) == 0x000400, "Member 'UReport_AreaChangeBtn_C::Quest' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Report) == 0x000408, "Member 'UReport_AreaChangeBtn_C::Report' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, LocationMap) == 0x000410, "Member 'UReport_AreaChangeBtn_C::LocationMap' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, AreaMap) == 0x000418, "Member 'UReport_AreaChangeBtn_C::AreaMap' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, WorldMap) == 0x000420, "Member 'UReport_AreaChangeBtn_C::WorldMap' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, OnPressR1) == 0x000428, "Member 'UReport_AreaChangeBtn_C::OnPressR1' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, OnPressL1) == 0x000430, "Member 'UReport_AreaChangeBtn_C::OnPressL1' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Normal) == 0x000438, "Member 'UReport_AreaChangeBtn_C::Normal' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, NoActive) == 0x000440, "Member 'UReport_AreaChangeBtn_C::NoActive' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Base1) == 0x000448, "Member 'UReport_AreaChangeBtn_C::Base1' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Base2_1) == 0x000450, "Member 'UReport_AreaChangeBtn_C::Base2_1' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Base2_2) == 0x000458, "Member 'UReport_AreaChangeBtn_C::Base2_2' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Bg1) == 0x000460, "Member 'UReport_AreaChangeBtn_C::Bg1' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Bg2) == 0x000468, "Member 'UReport_AreaChangeBtn_C::Bg2' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Bg3) == 0x000470, "Member 'UReport_AreaChangeBtn_C::Bg3' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Bg4) == 0x000478, "Member 'UReport_AreaChangeBtn_C::Bg4' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, EndGauge1) == 0x000480, "Member 'UReport_AreaChangeBtn_C::EndGauge1' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, EndGauge2) == 0x000488, "Member 'UReport_AreaChangeBtn_C::EndGauge2' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, EndImage_2) == 0x000490, "Member 'UReport_AreaChangeBtn_C::EndImage_2' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Icon_CardGame) == 0x000498, "Member 'UReport_AreaChangeBtn_C::Icon_CardGame' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Icon_Left) == 0x0004A0, "Member 'UReport_AreaChangeBtn_C::Icon_Left' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Icon_NaviMap) == 0x0004A8, "Member 'UReport_AreaChangeBtn_C::Icon_NaviMap' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Icon_Quest) == 0x0004B0, "Member 'UReport_AreaChangeBtn_C::Icon_Quest' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Icon_QuestNotice) == 0x0004B8, "Member 'UReport_AreaChangeBtn_C::Icon_QuestNotice' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Icon_Right) == 0x0004C0, "Member 'UReport_AreaChangeBtn_C::Icon_Right' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, IconBase) == 0x0004C8, "Member 'UReport_AreaChangeBtn_C::IconBase' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, IconSet) == 0x0004D0, "Member 'UReport_AreaChangeBtn_C::IconSet' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Line2_Img) == 0x0004D8, "Member 'UReport_AreaChangeBtn_C::Line2_Img' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Txt_CardGame_Num) == 0x0004E0, "Member 'UReport_AreaChangeBtn_C::Txt_CardGame_Num' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Txt_CardGame_Scenario) == 0x0004E8, "Member 'UReport_AreaChangeBtn_C::Txt_CardGame_Scenario' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, Txt_Quest_Num) == 0x0004F0, "Member 'UReport_AreaChangeBtn_C::Txt_Quest_Num' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, TxtBg_Main) == 0x0004F8, "Member 'UReport_AreaChangeBtn_C::TxtBg_Main' has a wrong offset!");
static_assert(offsetof(UReport_AreaChangeBtn_C, TxtBg_Sub) == 0x000500, "Member 'UReport_AreaChangeBtn_C::TxtBg_Sub' has a wrong offset!");

}

