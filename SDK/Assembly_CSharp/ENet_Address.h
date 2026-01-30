#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "ENet_ENetAddress.h"
namespace Assembly_CSharp::ENet { struct ENetAddress; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::ENet
{
	struct Address
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::ENet::ENetAddress nativeAddress;
		Assembly_CSharp::ENet::ENetAddress get_NativeData();
		void set_NativeData(Assembly_CSharp::ENet::ENetAddress value);
		void _ctor(Assembly_CSharp::ENet::ENetAddress address);
		uint16_t get_Port();
		void set_Port(uint16_t value);
		mscorlib::System::String* GetIP();
		bool SetIP(mscorlib::System::String* ip);
		mscorlib::System::String* GetHost();
		bool SetHost(mscorlib::System::String* hostName);
	};
}

