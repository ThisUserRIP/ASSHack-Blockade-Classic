#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "Facepunch_Steamworks_Friends.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Friends; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct SteamFriend; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Friends_ChatMessageDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend* friend, mscorlib::System::String* type, mscorlib::System::String* message);
		mscorlib::System::IAsyncResult* BeginInvoke(Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend* friend, mscorlib::System::String* type, mscorlib::System::String* message, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

