#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_CodeHelper.h"
#include "Rewired_ReInput.h"
namespace Rewired_Core::Rewired { struct ReInput; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct Player; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired
{
	struct ReInput_PlayerHelper : Rewired_Core::Rewired::Utils::Classes::CodeHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Rewired_Core::Rewired::ReInput_PlayerHelper* PxkTdIkXptwTeWPXwEumaEaSBxt;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::ReInput_PlayerHelper* get_Instance();
		void _ctor();
		int32_t get_playerCount();
		int32_t get_allPlayerCount();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Player>* get_Players();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Player>* get_AllPlayers();
		Rewired_Core::Rewired::Player* get_SystemPlayer();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Player>* GetPlayers(bool includeSystemPlayer);
		Rewired_Core::Rewired::Player* GetPlayer(int32_t playerId);
		Rewired_Core::Rewired::Player* GetPlayer(mscorlib::System::String* name);
		Rewired_Core::Rewired::Player* GetSystemPlayer();
		int32_t GetPlayerId(mscorlib::System::String* playerName);
		IL2CPP::Array<mscorlib::System::String*>* GetPlayerNames(bool includeSystemPlayer);
		IL2CPP::Array<mscorlib::System::String*>* GetPlayerDescriptiveNames(bool includeSystemPlayer);
		IL2CPP::Array<int32_t>* GetPlayerIds(bool includeSystemPlayer);
	};
}

