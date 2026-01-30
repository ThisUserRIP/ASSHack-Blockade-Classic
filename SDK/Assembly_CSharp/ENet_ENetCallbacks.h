#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::ENet { struct AllocCallback; };
namespace Assembly_CSharp::ENet { struct FreeCallback; };
namespace Assembly_CSharp::ENet { struct NoMemoryCallback; };

namespace Assembly_CSharp::ENet
{
	struct ENetCallbacks
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::ENet::AllocCallback* malloc;
		Assembly_CSharp::ENet::FreeCallback* free;
		Assembly_CSharp::ENet::NoMemoryCallback* noMemory;
	};
}

