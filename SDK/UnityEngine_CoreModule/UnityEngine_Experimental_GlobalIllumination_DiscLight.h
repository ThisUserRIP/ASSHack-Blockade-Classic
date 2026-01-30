#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Experimental_GlobalIllumination_LightMode.h"
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "UnityEngine_Experimental_GlobalIllumination_LinearColor.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct LinearColor; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Experimental_GlobalIllumination_FalloffType.h"

namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	struct DiscLight
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t instanceID;
		bool shadow;
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightMode mode;
		UnityEngine_CoreModule::UnityEngine::Vector3 position;
		UnityEngine_CoreModule::UnityEngine::Quaternion orientation;
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor color;
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor;
		float range;
		float radius;
		UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff;
	};
}

