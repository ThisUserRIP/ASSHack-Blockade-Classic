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
namespace System::System::Net { struct IPEndPoint; };
namespace System::System::Net { struct ServicePoint; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace System::System::Net
{
	struct BindIPEndPoint : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		System::Net::IPEndPoint* Invoke(System::Net::ServicePoint* servicePoint, System::Net::IPEndPoint* remoteEndPoint, int32_t retryCount);
		mscorlib::System::IAsyncResult* BeginInvoke(System::Net::ServicePoint* servicePoint, System::Net::IPEndPoint* remoteEndPoint, int32_t retryCount, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		System::Net::IPEndPoint* EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

