#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Auth_Ticket; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Image; };

namespace Assembly_CSharp
{
	struct SteamHandler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Facepunch_Steamworks::Facepunch::Steamworks::Auth_Ticket* _appTicket;
			mscorlib::System::String* SteamLang;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Start();
		static bool Init();
		static bool CheckInit();
		static mscorlib::System::String* GetUserName();
		static void GetUser();
		static void GetAuthTicket();
		static mscorlib::System::String* GetSteamAuthTicket();
		static void GetUserAvatar(uint64_t _steamID);
		static bool GetFriends();
		static void OnImage(Facepunch_Steamworks::Facepunch::Steamworks::Image* tmp);
		void OnDestroy();
		static void CloseConnection();
		void Update();
		void _ctor();
	};
}

