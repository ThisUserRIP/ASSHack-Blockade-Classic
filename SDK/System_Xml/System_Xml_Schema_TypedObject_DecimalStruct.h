#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_TypedObject.h"
namespace System_Xml::System::Xml::Schema { struct TypedObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml::Schema
{
	struct TypedObject_DecimalStruct : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isDecimal;
		IL2CPP::Array<mscorlib::System::Decimal>* dvalue;
		bool get_IsDecimal();
		void set_IsDecimal(bool value);
		IL2CPP::Array<mscorlib::System::Decimal>* get_Dvalue();
		void _ctor();
		void _ctor(int32_t dim);
	};
}

