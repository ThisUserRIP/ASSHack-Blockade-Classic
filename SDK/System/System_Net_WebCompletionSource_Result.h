#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_WebCompletionSource.h"
namespace System::System::Net { struct WebCompletionSource; };
#include "System_Net_WebCompletionSource_State.h"
namespace mscorlib::System::Runtime::ExceptionServices { struct ExceptionDispatchInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct WebCompletionSource_Result : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::WebCompletionSource_State _State_k__BackingField;
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _Error_k__BackingField;
		System::Net::WebCompletionSource_State get_State();
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error();
		void _ctor(System::Net::WebCompletionSource_State state, mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error);
	};
}

