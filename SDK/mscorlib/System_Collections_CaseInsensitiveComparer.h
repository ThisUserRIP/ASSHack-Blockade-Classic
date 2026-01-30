#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Globalization { struct CompareInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Collections
{
	struct CaseInsensitiveComparer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::CompareInfo* m_compareInfo;
		void _ctor();
		void _ctor(mscorlib::System::Globalization::CultureInfo* culture);
		static mscorlib::System::Collections::CaseInsensitiveComparer* get_Default();
		int32_t Compare(mscorlib::System::Object* a, mscorlib::System::Object* b);
	};
}

