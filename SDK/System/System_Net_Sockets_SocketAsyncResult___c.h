#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_Sockets_SocketAsyncResult.h"
namespace System::System::Net::Sockets { struct SocketAsyncResult; };
namespace mscorlib::System::Threading { struct WaitCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System::System::Net::Sockets
{
	struct SocketAsyncResult___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::Net::Sockets::SocketAsyncResult___c* __9;
			mscorlib::System::Threading::WaitCallback* __9__27_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _Complete_b__27_0(mscorlib::System::Object* state);
	};
}

