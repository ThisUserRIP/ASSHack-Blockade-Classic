#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct CharacterController; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Player; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct PressAnyButtonToJoinExample_GamePlayer : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t playerId;
		float moveSpeed;
		float bulletSpeed;
		UnityEngine_CoreModule::UnityEngine::GameObject* bulletPrefab;
		UnityEngine_PhysicsModule::UnityEngine::CharacterController* cc;
		UnityEngine_CoreModule::UnityEngine::Vector3 moveVector;
		bool fire;
		Rewired_Core::Rewired::Player* get_player();
		void OnEnable();
		void Update();
		void GetInput();
		void ProcessInput();
		void _ctor();
	};
}

