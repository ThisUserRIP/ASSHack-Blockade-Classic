#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp { struct Map; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct CharacterController; };
#include "Contact.h"
namespace Assembly_CSharp { struct Contact; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };

namespace Assembly_CSharp
{
	struct MapCharacterCollision : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Collision(Assembly_CSharp::Map* map, UnityEngine_PhysicsModule::UnityEngine::CharacterController* collider);
		static mscorlib::System::Nullable_1<Assembly_CSharp::Contact> GetClosestContact(Assembly_CSharp::Map* map, UnityEngine_PhysicsModule::UnityEngine::CharacterController* collider);
		void _ctor();
	};
}

