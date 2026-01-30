#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::ENet { struct Event; };
namespace Assembly_CSharp::ENet { struct Event; };
namespace Assembly_CSharp::ENet { struct Address; };
namespace Assembly_CSharp::ENet { struct Address; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Assembly_CSharp::ENet
{
	struct InterceptCallback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		int32_t Invoke(Assembly_CSharp::ENet::Event& event, Assembly_CSharp::ENet::Address& address, intptr_t receivedData, int32_t receivedDataLength);
		mscorlib::System::IAsyncResult* BeginInvoke(Assembly_CSharp::ENet::Event& event, Assembly_CSharp::ENet::Address& address, intptr_t receivedData, int32_t receivedDataLength, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		int32_t EndInvoke(Assembly_CSharp::ENet::Event& event, Assembly_CSharp::ENet::Address& address, mscorlib::System::IAsyncResult* result);
	};
}

