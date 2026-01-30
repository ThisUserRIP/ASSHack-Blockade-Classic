#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "ENet_EventType.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Assembly_CSharp::ENet
{
	struct ENetEvent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::ENet::EventType type;
		intptr_t peer;
		uint8_t channelID;
		uint32_t data;
		intptr_t packet;
	};
}

