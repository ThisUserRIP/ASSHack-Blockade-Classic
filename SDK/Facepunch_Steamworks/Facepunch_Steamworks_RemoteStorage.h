#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
namespace Facepunch_Steamworks::SteamNative { struct SteamRemoteStorage; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct RemoteFile; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct RemoteStorage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		Facepunch_Steamworks::SteamNative::SteamRemoteStorage* native;
		bool _filesInvalid;
		mscorlib::System::Collections::Generic::List_1<Facepunch_Steamworks::Facepunch::Steamworks::RemoteFile>* _files;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* c);
		void Dispose();
	};
}

