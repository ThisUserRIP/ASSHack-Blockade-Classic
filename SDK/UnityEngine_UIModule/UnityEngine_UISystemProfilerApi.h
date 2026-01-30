#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_UISystemProfilerApi_SampleType.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };

namespace UnityEngine_UIModule::UnityEngine
{
	struct UISystemProfilerApi : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void BeginSample(UnityEngine_UIModule::UnityEngine::UISystemProfilerApi_SampleType type);
		static void EndSample(UnityEngine_UIModule::UnityEngine::UISystemProfilerApi_SampleType type);
		static void AddMarker(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Object* obj);
	};
}

