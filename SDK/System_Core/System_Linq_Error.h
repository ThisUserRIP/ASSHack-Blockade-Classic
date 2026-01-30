#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct String; };

namespace System_Core::System::Linq
{
	struct Error : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Exception* ArgumentNull(mscorlib::System::String* s);
		static mscorlib::System::Exception* ArgumentOutOfRange(mscorlib::System::String* s);
		static mscorlib::System::Exception* MoreThanOneMatch();
		static mscorlib::System::Exception* NoElements();
		static mscorlib::System::Exception* NoMatch();
		static mscorlib::System::Exception* NotSupported();
	};
}

