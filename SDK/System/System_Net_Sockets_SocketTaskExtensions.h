#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace System::System::Net::Sockets { struct Socket; };
namespace System::System::Net { struct EndPoint; };

namespace System::System::Net::Sockets
{
	struct SocketTaskExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Threading::Tasks::Task* ConnectAsync(System::Net::Sockets::Socket* socket, System::Net::EndPoint* remoteEP);
	};
}

