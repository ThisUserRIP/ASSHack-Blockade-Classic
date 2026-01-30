#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkIdentity; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct PlayerController : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int16_t playerControllerId;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* unetView;
		UnityEngine_CoreModule::UnityEngine::GameObject* gameObject;
		struct StaticFields
		{
			int16_t kMaxLocalPlayers;
			int32_t MaxPlayersPerClient;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		bool get_IsValid();
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* go, int16_t playerControllerId);
		mscorlib::System::String* ToString();
	};
}

