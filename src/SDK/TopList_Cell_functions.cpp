#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TopList_Cell

#include "Basic.hpp"

#include "TopList_Cell_classes.hpp"
#include "TopList_Cell_parameters.hpp"


namespace SDK
{

// Function TopList_Cell.TopList_Cell_C.ExecuteUbergraph_TopList_Cell
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopList_Cell_C::ExecuteUbergraph_TopList_Cell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopList_Cell_C", "ExecuteUbergraph_TopList_Cell");

	Params::TopList_Cell_C_ExecuteUbergraph_TopList_Cell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TopList_Cell.TopList_Cell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopList_Cell_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopList_Cell_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

