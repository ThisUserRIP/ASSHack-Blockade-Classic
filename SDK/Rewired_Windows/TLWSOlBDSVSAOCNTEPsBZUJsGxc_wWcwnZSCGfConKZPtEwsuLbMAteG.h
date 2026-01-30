#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "TLWSOlBDSVSAOCNTEPsBZUJsGxc.h"
namespace Rewired_Windows { struct TLWSOlBDSVSAOCNTEPsBZUJsGxc; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Rewired_Windows
{
	struct TLWSOlBDSVSAOCNTEPsBZUJsGxc_wWcwnZSCGfConKZPtEwsuLbMAteG : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(intptr_t reportPointer, int32_t reportByteLength, int32_t reportCount, double timestamp);
		mscorlib::System::IAsyncResult* BeginInvoke(intptr_t reportPointer, int32_t reportByteLength, int32_t reportCount, double timestamp, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

