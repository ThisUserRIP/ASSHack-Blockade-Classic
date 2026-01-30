#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Reflection { struct ExceptionHandlingClause; };
namespace mscorlib::System::Reflection { struct LocalVariableInfo; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Reflection
{
	struct MethodBody : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Reflection::ExceptionHandlingClause*>* clauses;
		IL2CPP::Array<mscorlib::System::Reflection::LocalVariableInfo*>* locals;
		IL2CPP::Array<uint8_t>* il;
		bool init_locals;
		int32_t sig_token;
		int32_t max_stack;
		void _ctor();
		IL2CPP::Array<uint8_t>* GetILAsByteArray();
	};
}

