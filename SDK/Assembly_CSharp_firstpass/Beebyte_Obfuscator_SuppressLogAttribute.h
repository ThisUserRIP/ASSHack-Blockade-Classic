#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "Beebyte_Obfuscator_MessageCode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::Beebyte::Obfuscator
{
	struct SuppressLogAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::Beebyte::Obfuscator::MessageCode _messageCode;
		void _ctor();
		void _ctor(Assembly_CSharp_firstpass::Beebyte::Obfuscator::MessageCode messageCode);
	};
}

