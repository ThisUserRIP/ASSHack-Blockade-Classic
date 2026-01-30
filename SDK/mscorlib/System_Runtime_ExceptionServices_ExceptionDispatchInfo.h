#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::ExceptionServices
{
	struct ExceptionDispatchInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Exception* m_Exception;
		mscorlib::System::Object* m_stackTrace;
		void _ctor(mscorlib::System::Exception* exception);
		mscorlib::System::Object* get_BinaryStackTraceArray();
		static mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Capture(mscorlib::System::Exception* source);
		mscorlib::System::Exception* get_SourceException();
		void Throw();
	};
}

