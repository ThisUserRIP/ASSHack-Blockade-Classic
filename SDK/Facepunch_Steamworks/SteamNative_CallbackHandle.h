#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "..\mscorlib\System_Runtime_InteropServices_GCHandle.h"
namespace mscorlib::System::Runtime::InteropServices { struct GCHandle; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::SteamNative
{
	struct CallbackHandle : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* Steamworks;
		mscorlib::System::Runtime::InteropServices::GCHandle FuncA;
		mscorlib::System::Runtime::InteropServices::GCHandle FuncB;
		mscorlib::System::Runtime::InteropServices::GCHandle FuncC;
		intptr_t vTablePtr;
		mscorlib::System::Runtime::InteropServices::GCHandle PinnedCallback;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks);
		void Dispose();
		void UnregisterCallback();
	};
}

