#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "Unity_Profiling_ProfilerMarker_AutoScope.h"
namespace UnityEngine_CoreModule::Unity::Profiling { struct ProfilerMarker_AutoScope; };

namespace UnityEngine_CoreModule::Unity::Profiling
{
	struct ProfilerMarker
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		void _ctor(mscorlib::System::String* name);
		UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker_AutoScope Auto();
	};
}

