#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct vp_Layer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::vp_Layer* instance;
			int32_t Default;
			int32_t TransparentFX;
			int32_t IgnoreRaycast;
			int32_t Water;
			int32_t Enemy;
			int32_t Pickup;
			int32_t Trigger;
			int32_t MovableObject;
			int32_t Debris;
			int32_t LocalPlayer;
			int32_t Weapon;
			int32_t Players;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		static void Set(UnityEngine_CoreModule::UnityEngine::GameObject* obj, int32_t layer, bool recursive);
	};
}

