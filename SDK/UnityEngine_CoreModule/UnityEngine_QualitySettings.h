#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_ShadowmaskMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_ColorSpace.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct QualitySettings : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void SetQualityLevel(int32_t index);
		static UnityEngine_CoreModule::UnityEngine::ShadowmaskMode get_shadowmaskMode();
		static void set_vSyncCount(int32_t value);
		static int32_t get_antiAliasing();
		static void set_antiAliasing(int32_t value);
		static int32_t get_maxQueuedFrames();
		static void set_maxQueuedFrames(int32_t value);
		static int32_t GetQualityLevel();
		static void SetQualityLevel(int32_t index, bool applyExpensiveChanges);
		static IL2CPP::Array<mscorlib::System::String*>* get_names();
		static UnityEngine_CoreModule::UnityEngine::ColorSpace get_activeColorSpace();
	};
}

