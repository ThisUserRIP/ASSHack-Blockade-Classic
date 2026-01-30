#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "ggDVQTTQHAETzCUHHTNpTBizSCG.h"
namespace Rewired_Windows { struct ggDVQTTQHAETzCUHHTNpTBizSCG; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Rewired_Windows
{
	struct ggDVQTTQHAETzCUHHTNpTBizSCG_BbiIDUKcVdlIGMgdMdPBmLsSaxAr : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		intptr_t Invoke(intptr_t hWnd, uint32_t msg, intptr_t wParam, intptr_t lParam);
		mscorlib::System::IAsyncResult* BeginInvoke(intptr_t hWnd, uint32_t msg, intptr_t wParam, intptr_t lParam, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		intptr_t EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

