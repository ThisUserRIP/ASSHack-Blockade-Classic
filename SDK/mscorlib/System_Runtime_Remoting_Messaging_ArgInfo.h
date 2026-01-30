#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct MethodBase; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Remoting_Messaging_ArgInfoType.h"
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct ArgInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* _paramMap;
		int32_t _inoutArgCount;
		mscorlib::System::Reflection::MethodBase* _method;
		void _ctor(mscorlib::System::Reflection::MethodBase* method, mscorlib::System::Runtime::Remoting::Messaging::ArgInfoType type);
		IL2CPP::Array<mscorlib::System::Object*>* GetInOutArgs(IL2CPP::Array<mscorlib::System::Object*>* args);
	};
}

