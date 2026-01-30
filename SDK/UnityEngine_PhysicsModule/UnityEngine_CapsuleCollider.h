#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Collider.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct CapsuleCollider : UnityEngine_PhysicsModule::UnityEngine::Collider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void set_center(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void set_radius(float value);
		void set_height(float value);
		void set_center_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value);
	};
}

