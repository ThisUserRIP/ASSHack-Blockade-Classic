#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_CultureInfoConverter.h"
namespace System::System::ComponentModel { struct CultureInfoConverter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel
{
	struct CultureInfoConverter_CultureComparer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::CultureInfoConverter* converter;
		void _ctor(System::ComponentModel::CultureInfoConverter* cultureConverter);
		int32_t Compare(mscorlib::System::Object* item1, mscorlib::System::Object* item2);
	};
}

