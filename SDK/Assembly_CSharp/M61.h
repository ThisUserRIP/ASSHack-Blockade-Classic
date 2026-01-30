#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct EntManager; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };

namespace Assembly_CSharp
{
	struct M61 : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		int32_t uid;
		int32_t entid;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::EntManager* entmanager;
		void Awake();
		mscorlib::System::Collections::IEnumerator* Start();
		void OnTriggerEnter(UnityEngine_PhysicsModule::UnityEngine::Collider* col);
		void KillSelf();
		void _ctor();
	};
}

