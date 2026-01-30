#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct LobbyList_Lobby; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct LobbyList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		mscorlib::System::Collections::Generic::List_1<Facepunch_Steamworks::Facepunch::Steamworks::LobbyList_Lobby>* _Lobbies_k__BackingField;
		bool _Finished_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt64>* requests;
		mscorlib::System::Action* OnLobbiesUpdated;
		void set_Lobbies(mscorlib::System::Collections::Generic::List_1<Facepunch_Steamworks::Facepunch::Steamworks::LobbyList_Lobby>* value);
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* client);
		void Dispose();
	};
}

