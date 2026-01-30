#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace Assembly_CSharp { struct Client; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp
{
	struct TNTPlace : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		int32_t uid;
		int32_t entid;
		UnityEngine_CoreModule::UnityEngine::GameObject* obj;
		float timer;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPlayer;
		UnityEngine_CoreModule::UnityEngine::Camera* goMainCamera;
		float dist;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* TNT_place;
		Assembly_CSharp::Client* cscl;
		void Awake();
		void OnGUI();
		void Update();
		void DrawTNTPlace(UnityEngine_CoreModule::UnityEngine::Vector3 p, int32_t dist);
		void _ctor();
	};
}

