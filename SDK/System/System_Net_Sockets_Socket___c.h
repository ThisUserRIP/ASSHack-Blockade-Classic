#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_Sockets_Socket.h"
namespace System::System::Net::Sockets { struct Socket; };
namespace System::System { struct IOAsyncCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct IOAsyncResult; };
namespace mscorlib::System { struct IAsyncResult; };

namespace System::System::Net::Sockets
{
	struct Socket___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::Net::Sockets::Socket___c* __9;
			System::IOAsyncCallback* __9__242_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _BeginSend_b__242_0(System::IOAsyncResult* s);
		void __cctor_b__310_0(mscorlib::System::IAsyncResult* ares);
		void __cctor_b__310_1(System::IOAsyncResult* ares);
		void __cctor_b__310_2(System::IOAsyncResult* ares);
		void __cctor_b__310_3(mscorlib::System::IAsyncResult* ares);
		void __cctor_b__310_4(System::IOAsyncResult* ares);
		void __cctor_b__310_5(mscorlib::System::IAsyncResult* ares);
		void __cctor_b__310_6(System::IOAsyncResult* ares);
		void __cctor_b__310_7(mscorlib::System::IAsyncResult* ares);
		void __cctor_b__310_8(System::IOAsyncResult* ares);
		void __cctor_b__310_9(System::IOAsyncResult* ares);
		void __cctor_b__310_10(mscorlib::System::IAsyncResult* ares);
		void __cctor_b__310_11(System::IOAsyncResult* ares);
		void __cctor_b__310_12(mscorlib::System::IAsyncResult* ares);
		void __cctor_b__310_13(System::IOAsyncResult* ares);
		void __cctor_b__310_14(mscorlib::System::IAsyncResult* ares);
	};
}

