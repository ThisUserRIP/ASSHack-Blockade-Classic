#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "agfBbckzkopIdsLHksRRPOkzsVrN.h"
#include "AXdPGKEnqwjSFnNsJUeBcNFnpAN.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput
{
	struct DataObjectFormatAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Name;
		mscorlib::System::String* Guid;
		int32_t ArrayCount;
		Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN TypeFlags;
		Rewired_Windows::AXdPGKEnqwjSFnNsJUeBcNFnpAN Flags;
		int32_t InstanceNumber;
		void _ctor(mscorlib::System::String* guid, Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN typeFlags, Rewired_Windows::AXdPGKEnqwjSFnNsJUeBcNFnpAN flags);
		void _ctor(mscorlib::System::String* guid, int32_t arrayCount, Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN typeFlags, Rewired_Windows::AXdPGKEnqwjSFnNsJUeBcNFnpAN flags);
		void _ctor(mscorlib::System::String* guid, int32_t arrayCount, Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN typeFlags);
		void _ctor(int32_t arrayCount, Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN typeFlags);
	};
}

