#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_SocketStatusCallback_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SocketStatusCallback_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SocketStatusCallback_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t Socket;
		uint32_t ListenSocket;
		uint64_t SteamIDRemote;
		int32_t SNetSocketState;
		static Facepunch_Steamworks::SteamNative::SocketStatusCallback_t op_Implicit(Facepunch_Steamworks::SteamNative::SocketStatusCallback_t_PackSmall d);
	};
}

