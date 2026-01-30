#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_Sockets_SocketTaskExtensions.h"
namespace System::System::Net::Sockets { struct SocketTaskExtensions; };
namespace System::System::Net { struct EndPoint; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename TResult> struct Func_4; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net::Sockets
{
	struct SocketTaskExtensions___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::Net::Sockets::SocketTaskExtensions___c* __9;
			mscorlib::System::Func_4<System::Net::EndPoint, mscorlib::System::AsyncCallback, mscorlib::System::Object, mscorlib::System::IAsyncResult>* __9__2_0;
			mscorlib::System::Action_1<mscorlib::System::IAsyncResult>* __9__2_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::IAsyncResult* _ConnectAsync_b__2_0(System::Net::EndPoint* targetEndPoint, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		void _ConnectAsync_b__2_1(mscorlib::System::IAsyncResult* asyncResult);
	};
}

