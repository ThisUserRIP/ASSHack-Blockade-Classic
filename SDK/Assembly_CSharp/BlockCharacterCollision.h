#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Contact.h"
namespace Assembly_CSharp { struct Contact; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct CharacterController; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct BlockCharacterCollision : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Nullable_1<Assembly_CSharp::Contact> GetContactBlockCharacter(UnityEngine_CoreModule::UnityEngine::Vector3 blockPos, UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_PhysicsModule::UnityEngine::CharacterController* collider);
		static Assembly_CSharp::Contact GetClosestPoint(UnityEngine_CoreModule::UnityEngine::Vector3 blockPos, UnityEngine_CoreModule::UnityEngine::Vector3 point);
		void _ctor();
	};
}

