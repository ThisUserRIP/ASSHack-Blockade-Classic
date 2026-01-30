#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine::Profiling { struct Recorder; };

namespace UnityEngine_CoreModule::UnityEngine::Profiling
{
	struct Sampler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Profiling::Sampler* s_InvalidSampler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		bool get_isValid();
		UnityEngine_CoreModule::UnityEngine::Profiling::Recorder* GetRecorder();
		static intptr_t GetRecorderInternal(intptr_t ptr);
		static void _cctor();
	};
}

