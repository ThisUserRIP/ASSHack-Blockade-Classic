#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Text { struct StringBuilder; };

namespace mscorlib::System
{
	struct ModifierSpec
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* Resolve(mscorlib::System::Type* type);
		mscorlib::System::Text::StringBuilder* Append(mscorlib::System::Text::StringBuilder* sb);
	};
}

