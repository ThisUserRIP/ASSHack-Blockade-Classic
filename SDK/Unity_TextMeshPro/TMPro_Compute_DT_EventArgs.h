#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_Compute_DistanceTransform_EventTypes.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct Compute_DT_EventArgs : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::Compute_DistanceTransform_EventTypes EventType;
		float ProgressPercentage;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* Colors;
		void _ctor(Unity_TextMeshPro::TMPro::Compute_DistanceTransform_EventTypes type, float progress);
		void _ctor(Unity_TextMeshPro::TMPro::Compute_DistanceTransform_EventTypes type, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors);
	};
}

