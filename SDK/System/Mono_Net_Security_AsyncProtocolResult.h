#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::ExceptionServices { struct ExceptionDispatchInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::Mono::Net::Security
{
	struct AsyncProtocolResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _UserResult_k__BackingField;
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _Error_k__BackingField;
		int32_t get_UserResult();
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error();
		void _ctor(int32_t result);
		void _ctor(mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error);
	};
}

