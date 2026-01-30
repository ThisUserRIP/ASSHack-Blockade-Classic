#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_Config_UpdateLoopSetting.h"
#include "Rewired_UpdateLoopType.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "Rewired_Data_Mapping_AlternateAxisCalibrationType.h"
#include "Rewired_Config_ThrottleCalibrationMode.h"

namespace Rewired_Core::Rewired
{
	struct EnumConverter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t ToUpdateLoopTypes(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::UpdateLoopType>* results);
		static Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType ToAlternateAxisCalibrationType(Rewired_Core::Rewired::Config::ThrottleCalibrationMode throttleCalibrationMode);
	};
}

