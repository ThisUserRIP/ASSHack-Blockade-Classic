#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct PhysicMaterial : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static void Internal_CreateDynamicsMaterial(UnityEngine_PhysicsModule::UnityEngine::PhysicMaterial* mat, mscorlib::System::String* name);
		void set_bounciness(float value);
		void set_dynamicFriction(float value);
		void set_staticFriction(float value);
	};
}

