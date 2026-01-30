#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct Lightmapping_RequestLightsDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	struct Lightmapping : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* s_DefaultDelegate;
			UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* s_RequestLightsDelegate;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void SetDelegate(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* del);
		static UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* GetDelegate();
		static void ResetDelegate();
		static void RequestLights(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Light*>* lights, intptr_t outLightsPtr, int32_t outLightsCount);
		static void _cctor();
	};
}

