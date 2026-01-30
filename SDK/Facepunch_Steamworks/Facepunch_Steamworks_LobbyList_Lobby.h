#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_LobbyList.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct LobbyList; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct LobbyList_Lobby : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* lobbyData;
		Facepunch_Steamworks::Facepunch::Steamworks::Client* Client;
		mscorlib::System::String* _Name_k__BackingField;
		uint64_t _LobbyID_k__BackingField;
		uint64_t _Owner_k__BackingField;
		int32_t _MemberLimit_k__BackingField;
		int32_t _NumMembers_k__BackingField;
		mscorlib::System::String* _LobbyType_k__BackingField;
	};
}

