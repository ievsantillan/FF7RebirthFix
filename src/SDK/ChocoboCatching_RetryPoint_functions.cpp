#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChocoboCatching_RetryPoint

#include "Basic.hpp"

#include "ChocoboCatching_RetryPoint_classes.hpp"
#include "ChocoboCatching_RetryPoint_parameters.hpp"


namespace SDK
{

// Function ChocoboCatching_RetryPoint.ChocoboCatching_RetryPoint_C.ExecuteUbergraph_ChocoboCatching_RetryPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChocoboCatching_RetryPoint_C::ExecuteUbergraph_ChocoboCatching_RetryPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChocoboCatching_RetryPoint_C", "ExecuteUbergraph_ChocoboCatching_RetryPoint");

	Params::ChocoboCatching_RetryPoint_C_ExecuteUbergraph_ChocoboCatching_RetryPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChocoboCatching_RetryPoint.ChocoboCatching_RetryPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChocoboCatching_RetryPoint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChocoboCatching_RetryPoint_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

