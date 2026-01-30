#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct CServerData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t type;
		int32_t gamemode;
		int32_t players;
		int32_t maxplayers;
		int32_t map_id;
		mscorlib::System::String* name;
		uint64_t adminid;
		mscorlib::System::String* ip;
		int32_t port;
		int32_t password;
		bool hover;
		int32_t country_id;
		int32_t map_size;
		int32_t lvl;
		bool avaliable_by_lvl;
		void _ctor(int32_t _type, int32_t _gamemode, int32_t _players, int32_t _maxplayers, mscorlib::System::String* _map, uint64_t _adminid, mscorlib::System::String* _ip, int32_t _port, int32_t _password, int32_t _country_id, int32_t _lvl);
		void Finalize();
		void SetMapNameAndSize();
	};
}

