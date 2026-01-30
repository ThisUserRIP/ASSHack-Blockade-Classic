#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_Result.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Facepunch_Steamworks::SteamNative { template <typename T> struct CallResult_1; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "SteamNative_SteamAPICall_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamAPICall_t; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamInventoryRequestPricesResult_t
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		mscorlib::System::String* Currency;
		static Facepunch_Steamworks::SteamNative::SteamInventoryRequestPricesResult_t FromPointer(intptr_t p);
		static int32_t StructSize();
		static Facepunch_Steamworks::SteamNative::CallResult_1<Facepunch_Steamworks::SteamNative::SteamInventoryRequestPricesResult_t>* CallResult(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, Facepunch_Steamworks::SteamNative::SteamAPICall_t call, mscorlib::System::Action_2<Facepunch_Steamworks::SteamNative::SteamInventoryRequestPricesResult_t, mscorlib::System::Boolean>* CallbackFunction);
		static void Register(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks);
		static void OnResultThis(intptr_t self, intptr_t param);
		static void OnResultWithInfoThis(intptr_t self, intptr_t param, bool failure, Facepunch_Steamworks::SteamNative::SteamAPICall_t call);
		static int32_t OnGetSizeThis(intptr_t self);
		static int32_t OnGetSize();
		static void OnResult(intptr_t param);
		static void OnResultWithInfo(intptr_t param, bool failure, Facepunch_Steamworks::SteamNative::SteamAPICall_t call);
	};
}

