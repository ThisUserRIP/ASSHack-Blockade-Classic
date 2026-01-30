#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Networking_OnRecievedP2PData; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "Facepunch_Steamworks_Networking_SessionError.h"
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace System::System::Diagnostics { struct Stopwatch; };
namespace Facepunch_Steamworks::SteamNative { struct SteamNetworking; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "SteamNative_P2PSessionRequest_t.h"
namespace Facepunch_Steamworks::SteamNative { struct P2PSessionRequest_t; };
#include "SteamNative_P2PSessionConnectFail_t.h"
namespace Facepunch_Steamworks::SteamNative { struct P2PSessionConnectFail_t; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Networking : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Networking_OnRecievedP2PData* OnP2PData;
		mscorlib::System::Func_2<mscorlib::System::UInt64, mscorlib::System::Boolean>* OnIncomingConnection;
		mscorlib::System::Action_2<mscorlib::System::UInt64, Facepunch_Steamworks::Facepunch::Steamworks::Networking_SessionError>* OnConnectionFailed;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* ListenChannels;
		System::System::Diagnostics::Stopwatch* UpdateTimer;
		Facepunch_Steamworks::SteamNative::SteamNetworking* networking;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* ReceiveBuffer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, Facepunch_Steamworks::SteamNative::SteamNetworking* networking);
		void Dispose();
		void Update();
		void onP2PConnectionRequest(Facepunch_Steamworks::SteamNative::P2PSessionRequest_t o);
		void onP2PConnectionFailed(Facepunch_Steamworks::SteamNative::P2PSessionConnectFail_t o);
		bool ReadP2PPacket(int32_t channel);
		static void _cctor();
	};
}

