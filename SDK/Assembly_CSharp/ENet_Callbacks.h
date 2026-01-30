#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "ENet_ENetCallbacks.h"
namespace Assembly_CSharp::ENet { struct ENetCallbacks; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::ENet { struct AllocCallback; };
namespace Assembly_CSharp::ENet { struct FreeCallback; };
namespace Assembly_CSharp::ENet { struct NoMemoryCallback; };

namespace Assembly_CSharp::ENet
{
	struct Callbacks : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::ENet::ENetCallbacks nativeCallbacks;
		Assembly_CSharp::ENet::ENetCallbacks get_NativeData();
		void set_NativeData(Assembly_CSharp::ENet::ENetCallbacks value);
		void _ctor(Assembly_CSharp::ENet::AllocCallback* allocCallback, Assembly_CSharp::ENet::FreeCallback* freeCallback, Assembly_CSharp::ENet::NoMemoryCallback* noMemoryCallback);
	};
}

