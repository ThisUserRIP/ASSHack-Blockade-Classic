#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "SteamNative_Callback_VTableThis.h"
namespace Facepunch_Steamworks::SteamNative { struct Callback_VTableThis; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "SteamNative_SteamAPICall_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamAPICall_t; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Facepunch_Steamworks::SteamNative
{
	struct Callback_VTableThis_ResultWithInfoD : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(intptr_t thisptr, intptr_t pvParam, bool bIOFailure, Facepunch_Steamworks::SteamNative::SteamAPICall_t hSteamAPICall);
		mscorlib::System::IAsyncResult* BeginInvoke(intptr_t thisptr, intptr_t pvParam, bool bIOFailure, Facepunch_Steamworks::SteamNative::SteamAPICall_t hSteamAPICall, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

