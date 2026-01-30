#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collision; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct GrenadeMUTAGEN : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		int32_t uid;
		int32_t entid;
		IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* myColliders;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		UnityEngine_CoreModule::UnityEngine::Renderer* myRenderer;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* myRigidbody;
		UnityEngine_AudioModule::UnityEngine::AudioSource* myAS;
		bool exploded;
		void Awake();
		void OnCollisionEnter(UnityEngine_PhysicsModule::UnityEngine::Collision* collision);
		void OnTriggerEnter(UnityEngine_PhysicsModule::UnityEngine::Collider* col);
		void Explode(UnityEngine_PhysicsModule::UnityEngine::Collider* collision);
		mscorlib::System::Collections::IEnumerator* KillSelf();
		void _ctor();
	};
}

