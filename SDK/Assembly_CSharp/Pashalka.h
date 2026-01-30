#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct EntManager; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct Pashalka : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		int32_t uid;
		int32_t entid;
		bool timer;
		Assembly_CSharp::EntManager* entmanager;
		UnityEngine_UI::UnityEngine::UI::Image* healthImage;
		int32_t health;
		UnityEngine_CoreModule::UnityEngine::Material* mat;
		void Awake();
		mscorlib::System::Collections::IEnumerator* Start();
		void KillSelf();
		void Update();
		void SetHealth(int32_t _health);
		void _ctor();
	};
}

