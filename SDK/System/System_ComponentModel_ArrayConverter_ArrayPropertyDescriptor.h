#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_TypeConverter_SimplePropertyDescriptor.h"
#include "System_ComponentModel_ArrayConverter.h"
namespace System::System::ComponentModel { struct ArrayConverter; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel
{
	struct ArrayConverter_ArrayPropertyDescriptor : System::ComponentModel::TypeConverter_SimplePropertyDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t index;
		void _ctor(mscorlib::System::Type* arrayType, mscorlib::System::Type* elementType, int32_t index);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* instance);
		void SetValue(mscorlib::System::Object* instance, mscorlib::System::Object* value);
	};
}

