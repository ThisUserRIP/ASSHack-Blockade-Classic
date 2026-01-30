#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MulticastDelegate.h"
#include "System_DateTimeParse.h"
namespace mscorlib::System { struct DateTimeParse; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct __DTString; };
namespace mscorlib::System { struct __DTString; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace mscorlib::System
{
	struct DateTimeParse_MatchNumberDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		bool Invoke(mscorlib::System::__DTString& str, int32_t digitLen, int32_t& result);
		mscorlib::System::IAsyncResult* BeginInvoke(mscorlib::System::__DTString& str, int32_t digitLen, int32_t& result, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		bool EndInvoke(mscorlib::System::__DTString& str, int32_t& result, mscorlib::System::IAsyncResult* __result);
	};
}

