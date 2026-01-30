#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Delegate; };
namespace System::System::Net::Sockets { struct SocketException; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct DotNetCompatibility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* GetMethodName(mscorlib::System::Delegate* func);
		static mscorlib::System::Type* GetBaseType(mscorlib::System::Type* type);
		static mscorlib::System::String* GetErrorCode(System::System::Net::Sockets::SocketException* e);
	};
}

