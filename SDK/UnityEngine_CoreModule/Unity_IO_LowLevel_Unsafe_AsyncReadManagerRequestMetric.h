#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Unity_IO_LowLevel_Unsafe_ProcessingState.h"
#include "Unity_IO_LowLevel_Unsafe_FileReadType.h"
#include "Unity_IO_LowLevel_Unsafe_Priority.h"
#include "Unity_IO_LowLevel_Unsafe_AssetLoadingSubsystem.h"
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };

namespace UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe
{
	struct AsyncReadManagerRequestMetric
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _AssetName_k__BackingField;
		mscorlib::System::String* _FileName_k__BackingField;
		uint64_t _OffsetBytes_k__BackingField;
		uint64_t _SizeBytes_k__BackingField;
		uint64_t _AssetTypeId_k__BackingField;
		uint64_t _CurrentBytesRead_k__BackingField;
		uint32_t _BatchReadCount_k__BackingField;
		bool _IsBatchRead_k__BackingField;
		UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe::ProcessingState _State_k__BackingField;
		UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe::FileReadType _ReadType_k__BackingField;
		UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe::Priority _PriorityLevel_k__BackingField;
		UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem _Subsystem_k__BackingField;
		double _RequestTimeMicroseconds_k__BackingField;
		double _TimeInQueueMicroseconds_k__BackingField;
		double _TotalTimeMicroseconds_k__BackingField;
	};
}

