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
namespace Rewired_Core::Rewired { struct Player; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct CharacterController; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct CustomControllerDemo_Player : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t playerId;
		float speed;
		float bulletSpeed;
		UnityEngine_CoreModule::UnityEngine::GameObject* bulletPrefab;
		Rewired_Core::Rewired::Player* _player;
		UnityEngine_PhysicsModule::UnityEngine::CharacterController* cc;
		Rewired_Core::Rewired::Player* get_player();
		void Awake();
		void Update();
		void _ctor();
	};
}

