#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Globalization { struct TextInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Collections
{
	struct CaseInsensitiveHashCodeProvider : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::TextInfo* m_text;
		void _ctor();
		void _ctor(mscorlib::System::Globalization::CultureInfo* culture);
		static mscorlib::System::Collections::CaseInsensitiveHashCodeProvider* get_Default();
		int32_t GetHashCode(mscorlib::System::Object* obj);
	};
}

