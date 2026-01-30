#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::ENet { struct PacketFreeCallback; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "ENet_PacketFlags.h"

namespace Assembly_CSharp::ENet
{
	struct Packet
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t nativePacket;
		intptr_t get_NativeData();
		void set_NativeData(intptr_t value);
		void _ctor(intptr_t packet);
		void Dispose();
		bool get_IsSet();
		intptr_t get_Data();
		intptr_t get_UserData();
		void set_UserData(intptr_t value);
		int32_t get_Length();
		bool get_HasReferences();
		void ThrowIfNotCreated();
		void SetFreeCallback(intptr_t callback);
		void SetFreeCallback(Assembly_CSharp::ENet::PacketFreeCallback* callback);
		void Create(IL2CPP::Array<uint8_t>* data);
		void Create(IL2CPP::Array<uint8_t>* data, int32_t length);
		void Create(IL2CPP::Array<uint8_t>* data, Assembly_CSharp::ENet::PacketFlags flags);
		void Create(IL2CPP::Array<uint8_t>* data, int32_t length, Assembly_CSharp::ENet::PacketFlags flags);
		void Create(intptr_t data, int32_t length, Assembly_CSharp::ENet::PacketFlags flags);
		void Create(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t length, Assembly_CSharp::ENet::PacketFlags flags);
		void Create(intptr_t data, int32_t offset, int32_t length, Assembly_CSharp::ENet::PacketFlags flags);
		void CopyTo(IL2CPP::Array<uint8_t>* destination, int32_t startPos);
	};
}

