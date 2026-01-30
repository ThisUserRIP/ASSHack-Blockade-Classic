#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "Unity_IO_LowLevel_Unsafe_ProcessingState.h"
#include "Unity_IO_LowLevel_Unsafe_FileReadType.h"
#include "Unity_IO_LowLevel_Unsafe_Priority.h"
#include "Unity_IO_LowLevel_Unsafe_AssetLoadingSubsystem.h"

namespace UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe
{
	struct AsyncReadManagerMetricsFilters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint64_t>* TypeIDs;
		IL2CPP::Array<UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe::ProcessingState>* States;
		IL2CPP::Array<UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe::FileReadType>* ReadTypes;
		IL2CPP::Array<UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe::Priority>* PriorityLevels;
		IL2CPP::Array<UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>* Subsystems;
	};
}

