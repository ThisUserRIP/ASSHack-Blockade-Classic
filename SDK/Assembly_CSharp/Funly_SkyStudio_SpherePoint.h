#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct SpherePoint : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float horizontalRotation;
		float verticalRotation;
		struct StaticFields
		{
			float MinHorizontalRotation;
			float MaxHorizontalRotation;
			float MinVerticalRotation;
			float MaxVerticalRotation;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(float horizontalRotation, float verticalRotation);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector3 worldDirection);
		void SetFromWorldDirection(UnityEngine_CoreModule::UnityEngine::Vector3 worldDirection);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetWorldDirection();
	};
}

