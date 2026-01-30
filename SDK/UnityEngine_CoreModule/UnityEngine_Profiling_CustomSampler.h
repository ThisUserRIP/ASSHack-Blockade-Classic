#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Profiling_Sampler.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine::Profiling
{
	struct CustomSampler : UnityEngine_CoreModule::UnityEngine::Profiling::Sampler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* s_InvalidCustomSampler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(intptr_t ptr);
		static UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* Create(mscorlib::System::String* name, bool collectGpuData);
		static intptr_t CreateInternal(mscorlib::System::String* name, bool collectGpuData);
		static void _cctor();
	};
}

