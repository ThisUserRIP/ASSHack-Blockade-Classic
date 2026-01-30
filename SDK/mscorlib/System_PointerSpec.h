#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System
{
	struct PointerSpec : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t pointer_level;
		void _ctor(int32_t pointer_level);
		mscorlib::System::Type* Resolve(mscorlib::System::Type* type);
		mscorlib::System::Text::StringBuilder* Append(mscorlib::System::Text::StringBuilder* sb);
		mscorlib::System::String* ToString();
	};
}

