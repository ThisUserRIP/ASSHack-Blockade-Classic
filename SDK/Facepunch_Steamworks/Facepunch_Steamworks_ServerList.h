#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct ServerList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::UInt64>* FavouriteHash;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::UInt64>* HistoryHash;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* client);
		void UpdateFavouriteList();
		void Dispose();
	};
}

