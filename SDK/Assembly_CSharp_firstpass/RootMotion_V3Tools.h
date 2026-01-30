#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct V3Tools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Vector3 Lerp(UnityEngine_CoreModule::UnityEngine::Vector3 fromVector, UnityEngine_CoreModule::UnityEngine::Vector3 toVector, float weight);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Slerp(UnityEngine_CoreModule::UnityEngine::Vector3 fromVector, UnityEngine_CoreModule::UnityEngine::Vector3 toVector, float weight);
		static UnityEngine_CoreModule::UnityEngine::Vector3 ExtractVertical(UnityEngine_CoreModule::UnityEngine::Vector3 v, UnityEngine_CoreModule::UnityEngine::Vector3 verticalAxis, float weight);
		static UnityEngine_CoreModule::UnityEngine::Vector3 ExtractHorizontal(UnityEngine_CoreModule::UnityEngine::Vector3 v, UnityEngine_CoreModule::UnityEngine::Vector3 normal, float weight);
		static UnityEngine_CoreModule::UnityEngine::Vector3 ClampDirection(UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_CoreModule::UnityEngine::Vector3 normalDirection, float clampWeight, int32_t clampSmoothing, bool& changed);
		static UnityEngine_CoreModule::UnityEngine::Vector3 ClampDirection(UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_CoreModule::UnityEngine::Vector3 normalDirection, float clampWeight, int32_t clampSmoothing, float& clampValue);
		static UnityEngine_CoreModule::UnityEngine::Vector3 LineToPlane(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_CoreModule::UnityEngine::Vector3 planeNormal, UnityEngine_CoreModule::UnityEngine::Vector3 planePoint);
		static UnityEngine_CoreModule::UnityEngine::Vector3 PointToPlane(UnityEngine_CoreModule::UnityEngine::Vector3 point, UnityEngine_CoreModule::UnityEngine::Vector3 planePosition, UnityEngine_CoreModule::UnityEngine::Vector3 planeNormal);
	};
}

